/////////1/////////2/////////3/////////4/////////5/////////6/////////7/////////8
// basic_xml_iarchive.ipp:

// (C) Copyright 2002 Robert Ramey - http://www.rrsd.com . 
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for updates, documentation, and revision history.

#include <Pothos/serialization/impl/assert.hpp>
#include <cstddef> // NULL
#include <algorithm>

#include <Pothos/serialization/throw_exception.hpp>
#include <Pothos/archive/xml_archive_exception.hpp>
#include <Pothos/archive/basic_xml_iarchive.hpp>
#include <Pothos/serialization/tracking.hpp>

namespace Pothos {
namespace archive {

/////////1/////////2/////////3/////////4/////////5/////////6/////////7/////////8
// implementation of xml_text_archive

template<class Archive>
POTHOS_ARCHIVE_OR_WARCHIVE_DECL(void)
basic_xml_iarchive<Archive>::load_start(const char *name){
    // if there's no name
    if(NULL == name)
        return;
    bool result = this->This()->gimpl->parse_start_tag(this->This()->get_is());
    if(true != result){
        Pothos::serialization::throw_exception(
            archive_exception(archive_exception::input_stream_error)
        );
    }
    // don't check start tag at highest level
    ++depth;
    return;
}

template<class Archive>
POTHOS_ARCHIVE_OR_WARCHIVE_DECL(void)
basic_xml_iarchive<Archive>::load_end(const char *name){
    // if there's no name
    if(NULL == name)
        return;
    bool result = this->This()->gimpl->parse_end_tag(this->This()->get_is());
    if(true != result){
        Pothos::serialization::throw_exception(
            archive_exception(archive_exception::input_stream_error)
        );
    }
    
    // don't check start tag at highest level
    if(0 == --depth)
        return;
        
    if(0 == (this->get_flags() & no_xml_tag_checking)){
        // double check that the tag matches what is expected - useful for debug
        if(0 != name[this->This()->gimpl->rv.object_name.size()]
        || ! std::equal(
                this->This()->gimpl->rv.object_name.begin(),
                this->This()->gimpl->rv.object_name.end(),
                name
            )
        ){
            Pothos::serialization::throw_exception(
                xml_archive_exception(
                    xml_archive_exception::xml_archive_tag_mismatch,
                    name
                )
            );
        }
    }
}

template<class Archive>
POTHOS_ARCHIVE_OR_WARCHIVE_DECL(void)
basic_xml_iarchive<Archive>::load_override(object_id_type & t, int){
    t = object_id_type(this->This()->gimpl->rv.object_id);
}

template<class Archive>
POTHOS_ARCHIVE_OR_WARCHIVE_DECL(void)
basic_xml_iarchive<Archive>::load_override(version_type & t, int){
    t = version_type(this->This()->gimpl->rv.version);
}

template<class Archive>
POTHOS_ARCHIVE_OR_WARCHIVE_DECL(void)
basic_xml_iarchive<Archive>::load_override(class_id_type & t, int){
    t = class_id_type(this->This()->gimpl->rv.class_id);
}

template<class Archive>
POTHOS_ARCHIVE_OR_WARCHIVE_DECL(void)
basic_xml_iarchive<Archive>::load_override(tracking_type & t, int){
    t = this->This()->gimpl->rv.tracking_level;
}

template<class Archive>
POTHOS_ARCHIVE_OR_WARCHIVE_DECL(POTHOS_PP_EMPTY())
basic_xml_iarchive<Archive>::basic_xml_iarchive(unsigned int flags) :
    detail::common_iarchive<Archive>(flags),
    depth(0)
{}
template<class Archive>
POTHOS_ARCHIVE_OR_WARCHIVE_DECL(POTHOS_PP_EMPTY())
basic_xml_iarchive<Archive>::~basic_xml_iarchive(){}

} // namespace archive
} // namespace boost
