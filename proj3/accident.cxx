
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from accident.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "accident.h"

/* ========================================================================= */
const char *AccidentTYPENAME = "Accident";

DDS_TypeCode* Accident_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode Accident_g_tc_timestamp_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode Accident_g_tc_route_string = DDS_INITIALIZE_STRING_TYPECODE(255);
    static DDS_TypeCode Accident_g_tc_vehicle_string = DDS_INITIALIZE_STRING_TYPECODE(255);

    static DDS_TypeCode_Member Accident_g_tc_members[4]=
    {
        {
            (char *)"timestamp",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"route",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"vehicle",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        },
        {
            (char *)"stopNumber",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_BOOLEAN_FALSE, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Ignored */
            0,/* Ignored */
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Accident_g_tc =
    {{
        DDS_TK_STRUCT,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"Accident", /* Name */
        NULL, /* Ignored */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        4, /* Number of members */
        Accident_g_tc_members, /* Members */
        DDS_VM_NONE /* Ignored */
    }}; /* Type code for Accident*/

    if (is_initialized) {
        return &Accident_g_tc;
    }


    Accident_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&Accident_g_tc_timestamp_string;
    Accident_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Accident_g_tc_route_string;
    Accident_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&Accident_g_tc_vehicle_string;
    Accident_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &Accident_g_tc;
}


RTIBool Accident_initialize(
    Accident* sample) {
  return Accident_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Accident_initialize_ex(
    Accident* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
        
    
    if (allocatePointers) {} /* To avoid warnings */
    if (allocateMemory) {} /* To avoid warnings */

    if (allocateMemory) {
        sample->timestamp = DDS_String_alloc((255));
        if (sample->timestamp == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->timestamp != NULL) { 
            sample->timestamp[0] = '\0';
        }
    }
            

    if (allocateMemory) {
        sample->route = DDS_String_alloc((255));
        if (sample->route == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->route != NULL) { 
            sample->route[0] = '\0';
        }
    }
            

    if (allocateMemory) {
        sample->vehicle = DDS_String_alloc((255));
        if (sample->vehicle == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->vehicle != NULL) { 
            sample->vehicle[0] = '\0';
        }
    }
            

    if (!RTICdrType_initLong(&sample->stopNumber)) {
        return RTI_FALSE;
    }                
            


    return RTI_TRUE;
}

void Accident_finalize(
    Accident* sample)
{
    Accident_finalize_ex(sample,RTI_TRUE);
}
        
void Accident_finalize_ex(
    Accident* sample,RTIBool deletePointers)
{        
    if (sample) { } /* To avoid warnings */
    if (deletePointers) {} /* To avoid warnings */


    DDS_String_free(sample->timestamp);                
            

    DDS_String_free(sample->route);                
            

    DDS_String_free(sample->vehicle);                
            


}

RTIBool Accident_copy(
    Accident* dst,
    const Accident* src)
{        

    if (!RTICdrType_copyString(
        dst->timestamp, src->timestamp, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->route, src->route, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyString(
        dst->vehicle, src->vehicle, (255) + 1)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrType_copyLong(
        &dst->stopNumber, &src->stopNumber)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Accident' sequence class.
 */
#define T Accident
#define TSeq AccidentSeq
#define T_initialize_ex Accident_initialize_ex
#define T_finalize_ex   Accident_finalize_ex
#define T_copy       Accident_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_ex
#undef T_initialize_ex
#undef TSeq
#undef T

