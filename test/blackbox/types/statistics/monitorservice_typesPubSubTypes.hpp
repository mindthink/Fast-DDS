// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file monitorservice_typesPubSubTypes.hpp
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastddsgen (version: 4.1.0).
 */


#ifndef FAST_DDS_GENERATED__EPROSIMA_FASTDDS_STATISTICS_MONITORSERVICE_TYPES_PUBSUBTYPES_HPP
#define FAST_DDS_GENERATED__EPROSIMA_FASTDDS_STATISTICS_MONITORSERVICE_TYPES_PUBSUBTYPES_HPP

#include <fastdds/dds/core/policy/QosPolicies.hpp>
#include <fastdds/dds/topic/TopicDataType.hpp>
#include <fastdds/rtps/common/InstanceHandle.hpp>
#include <fastdds/rtps/common/SerializedPayload.hpp>
#include <fastdds/utils/md5.hpp>

#include "monitorservice_types.hpp"

#include "typesPubSubTypes.hpp"

#if !defined(FASTDDS_GEN_API_VER) || (FASTDDS_GEN_API_VER != 3)
#error \
    Generated monitorservice_types is not compatible with current installed Fast DDS. Please, regenerate it with fastddsgen.
#endif  // FASTDDS_GEN_API_VER

namespace eprosima
{
    namespace fastdds
    {
        namespace statistics
        {

            /*!
             * @brief This class represents the TopicDataType of the type Connection defined by the user in the IDL file.
             * @ingroup monitorservice_types
             */
            class ConnectionPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef ::eprosima::fastdds::statistics::Connection type;

                eProsima_user_DllExport ConnectionPubSubType();

                eProsima_user_DllExport ~ConnectionPubSubType() override;

                eProsima_user_DllExport bool serialize(
                        const void* const data,
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool deserialize(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        void* data) override;

                eProsima_user_DllExport uint32_t calculate_serialized_size(
                        const void* const data,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool compute_key(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport bool compute_key(
                        const void* const data,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport void* create_data() override;

                eProsima_user_DllExport void delete_data(
                        void* data) override;

                //Register TypeObject representation in Fast DDS TypeObjectRegistry
                eProsima_user_DllExport void register_type_object_representation() override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                eProsima_user_DllExport inline bool is_plain(
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
                {
                    static_cast<void>(data_representation);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    static_cast<void>(memory);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

            private:

                eprosima::fastdds::MD5 md5_;
                unsigned char* key_buffer_;

            };


            /*!
             * @brief This class represents the TopicDataType of the type QosPolicyCount_s defined by the user in the IDL file.
             * @ingroup monitorservice_types
             */
            class QosPolicyCount_sPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef ::eprosima::fastdds::statistics::QosPolicyCount_s type;

                eProsima_user_DllExport QosPolicyCount_sPubSubType();

                eProsima_user_DllExport ~QosPolicyCount_sPubSubType() override;

                eProsima_user_DllExport bool serialize(
                        const void* const data,
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool deserialize(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        void* data) override;

                eProsima_user_DllExport uint32_t calculate_serialized_size(
                        const void* const data,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool compute_key(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport bool compute_key(
                        const void* const data,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport void* create_data() override;

                eProsima_user_DllExport void delete_data(
                        void* data) override;

                //Register TypeObject representation in Fast DDS TypeObjectRegistry
                eProsima_user_DllExport void register_type_object_representation() override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                eProsima_user_DllExport inline bool is_plain(
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
                {
                    static_cast<void>(data_representation);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    static_cast<void>(memory);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

            private:

                eprosima::fastdds::MD5 md5_;
                unsigned char* key_buffer_;

            };


            /*!
             * @brief This class represents the TopicDataType of the type BaseStatus_s defined by the user in the IDL file.
             * @ingroup monitorservice_types
             */
            class BaseStatus_sPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef ::eprosima::fastdds::statistics::BaseStatus_s type;

                eProsima_user_DllExport BaseStatus_sPubSubType();

                eProsima_user_DllExport ~BaseStatus_sPubSubType() override;

                eProsima_user_DllExport bool serialize(
                        const void* const data,
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool deserialize(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        void* data) override;

                eProsima_user_DllExport uint32_t calculate_serialized_size(
                        const void* const data,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool compute_key(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport bool compute_key(
                        const void* const data,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport void* create_data() override;

                eProsima_user_DllExport void delete_data(
                        void* data) override;

                //Register TypeObject representation in Fast DDS TypeObjectRegistry
                eProsima_user_DllExport void register_type_object_representation() override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                eProsima_user_DllExport inline bool is_plain(
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
                {
                    static_cast<void>(data_representation);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    static_cast<void>(memory);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

            private:

                eprosima::fastdds::MD5 md5_;
                unsigned char* key_buffer_;

            };

            typedef std::vector<eprosima::fastdds::statistics::QosPolicyCount_s> QosPolicyCountSeq_s;

            /*!
             * @brief This class represents the TopicDataType of the type IncompatibleQoSStatus_s defined by the user in the IDL file.
             * @ingroup monitorservice_types
             */
            class IncompatibleQoSStatus_sPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef ::eprosima::fastdds::statistics::IncompatibleQoSStatus_s type;

                eProsima_user_DllExport IncompatibleQoSStatus_sPubSubType();

                eProsima_user_DllExport ~IncompatibleQoSStatus_sPubSubType() override;

                eProsima_user_DllExport bool serialize(
                        const void* const data,
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool deserialize(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        void* data) override;

                eProsima_user_DllExport uint32_t calculate_serialized_size(
                        const void* const data,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool compute_key(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport bool compute_key(
                        const void* const data,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport void* create_data() override;

                eProsima_user_DllExport void delete_data(
                        void* data) override;

                //Register TypeObject representation in Fast DDS TypeObjectRegistry
                eProsima_user_DllExport void register_type_object_representation() override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                eProsima_user_DllExport inline bool is_plain(
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
                {
                    static_cast<void>(data_representation);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    static_cast<void>(memory);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

            private:

                eprosima::fastdds::MD5 md5_;
                unsigned char* key_buffer_;

            };


            /*!
             * @brief This class represents the TopicDataType of the type LivelinessChangedStatus_s defined by the user in the IDL file.
             * @ingroup monitorservice_types
             */
            class LivelinessChangedStatus_sPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef ::eprosima::fastdds::statistics::LivelinessChangedStatus_s type;

                eProsima_user_DllExport LivelinessChangedStatus_sPubSubType();

                eProsima_user_DllExport ~LivelinessChangedStatus_sPubSubType() override;

                eProsima_user_DllExport bool serialize(
                        const void* const data,
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool deserialize(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        void* data) override;

                eProsima_user_DllExport uint32_t calculate_serialized_size(
                        const void* const data,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool compute_key(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport bool compute_key(
                        const void* const data,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport void* create_data() override;

                eProsima_user_DllExport void delete_data(
                        void* data) override;

                //Register TypeObject representation in Fast DDS TypeObjectRegistry
                eProsima_user_DllExport void register_type_object_representation() override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                eProsima_user_DllExport inline bool is_plain(
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
                {
                    static_cast<void>(data_representation);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    static_cast<void>(memory);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

            private:

                eprosima::fastdds::MD5 md5_;
                unsigned char* key_buffer_;

            };


            /*!
             * @brief This class represents the TopicDataType of the type DeadlineMissedStatus_s defined by the user in the IDL file.
             * @ingroup monitorservice_types
             */
            class DeadlineMissedStatus_sPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef ::eprosima::fastdds::statistics::DeadlineMissedStatus_s type;

                eProsima_user_DllExport DeadlineMissedStatus_sPubSubType();

                eProsima_user_DllExport ~DeadlineMissedStatus_sPubSubType() override;

                eProsima_user_DllExport bool serialize(
                        const void* const data,
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool deserialize(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        void* data) override;

                eProsima_user_DllExport uint32_t calculate_serialized_size(
                        const void* const data,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool compute_key(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport bool compute_key(
                        const void* const data,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport void* create_data() override;

                eProsima_user_DllExport void delete_data(
                        void* data) override;

                //Register TypeObject representation in Fast DDS TypeObjectRegistry
                eProsima_user_DllExport void register_type_object_representation() override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return true;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                eProsima_user_DllExport inline bool is_plain(
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
                {
                    static_cast<void>(data_representation);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    static_cast<void>(memory);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

            private:

                eprosima::fastdds::MD5 md5_;
                unsigned char* key_buffer_;

            };

            typedef eprosima::fastdds::statistics::BaseStatus_s LivelinessLostStatus_s;
            typedef eprosima::fastdds::statistics::BaseStatus_s InconsistentTopicStatus_s;
            typedef eprosima::fastdds::statistics::BaseStatus_s SampleLostStatus_s;

            /*!
             * @brief This class represents the TopicDataType of the type ExtendedIncompatibleQoSStatus_s defined by the user in the IDL file.
             * @ingroup monitorservice_types
             */
            class ExtendedIncompatibleQoSStatus_sPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef ::eprosima::fastdds::statistics::ExtendedIncompatibleQoSStatus_s type;

                eProsima_user_DllExport ExtendedIncompatibleQoSStatus_sPubSubType();

                eProsima_user_DllExport ~ExtendedIncompatibleQoSStatus_sPubSubType() override;

                eProsima_user_DllExport bool serialize(
                        const void* const data,
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool deserialize(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        void* data) override;

                eProsima_user_DllExport uint32_t calculate_serialized_size(
                        const void* const data,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool compute_key(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport bool compute_key(
                        const void* const data,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport void* create_data() override;

                eProsima_user_DllExport void delete_data(
                        void* data) override;

                //Register TypeObject representation in Fast DDS TypeObjectRegistry
                eProsima_user_DllExport void register_type_object_representation() override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                eProsima_user_DllExport inline bool is_plain(
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
                {
                    static_cast<void>(data_representation);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    static_cast<void>(memory);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

            private:

                eprosima::fastdds::MD5 md5_;
                unsigned char* key_buffer_;

            };

            typedef std::vector<eprosima::fastdds::statistics::ExtendedIncompatibleQoSStatus_s> ExtendedIncompatibleQoSStatusSeq_s;
            namespace StatusKind
            {
                typedef uint32_t StatusKind;
            } // namespace StatusKind

            /*!
             * @brief This class represents the TopicDataType of the type MonitorServiceStatusData defined by the user in the IDL file.
             * @ingroup monitorservice_types
             */
            class MonitorServiceStatusDataPubSubType : public eprosima::fastdds::dds::TopicDataType
            {
            public:

                typedef ::eprosima::fastdds::statistics::MonitorServiceStatusData type;

                eProsima_user_DllExport MonitorServiceStatusDataPubSubType();

                eProsima_user_DllExport ~MonitorServiceStatusDataPubSubType() override;

                eProsima_user_DllExport bool serialize(
                        const void* const data,
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool deserialize(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        void* data) override;

                eProsima_user_DllExport uint32_t calculate_serialized_size(
                        const void* const data,
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) override;

                eProsima_user_DllExport bool compute_key(
                        eprosima::fastdds::rtps::SerializedPayload_t& payload,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport bool compute_key(
                        const void* const data,
                        eprosima::fastdds::rtps::InstanceHandle_t& ihandle,
                        bool force_md5 = false) override;

                eProsima_user_DllExport void* create_data() override;

                eProsima_user_DllExport void delete_data(
                        void* data) override;

                //Register TypeObject representation in Fast DDS TypeObjectRegistry
                eProsima_user_DllExport void register_type_object_representation() override;

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
                eProsima_user_DllExport inline bool is_bounded() const override
                {
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

            #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

                eProsima_user_DllExport inline bool is_plain(
                        eprosima::fastdds::dds::DataRepresentationId_t data_representation) const override
                {
                    static_cast<void>(data_representation);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

            #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
                eProsima_user_DllExport inline bool construct_sample(
                        void* memory) const override
                {
                    static_cast<void>(memory);
                    return false;
                }

            #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE

            private:

                eprosima::fastdds::MD5 md5_;
                unsigned char* key_buffer_;

            };

        } // namespace statistics
    } // namespace fastdds
} // namespace eprosima

#endif // FAST_DDS_GENERATED__EPROSIMA_FASTDDS_STATISTICS_MONITORSERVICE_TYPES_PUBSUBTYPES_HPP

