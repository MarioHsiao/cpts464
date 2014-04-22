
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from accident.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef accident_63819288_h
#define accident_63819288_h

#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
#else
    #include "ndds_standalone_type.h"
#endif


#ifdef __cplusplus
extern "C" {
#endif

        
extern const char *AccidentTYPENAME;
        

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
    struct AccidentSeq;

#ifndef NDDS_STANDALONE_TYPE
    class AccidentTypeSupport;
    class AccidentDataWriter;
    class AccidentDataReader;
#endif

#endif

            
    
class Accident                                        
{
public:            
#ifdef __cplusplus
    typedef struct AccidentSeq Seq;

#ifndef NDDS_STANDALONE_TYPE
    typedef AccidentTypeSupport TypeSupport;
    typedef AccidentDataWriter DataWriter;
    typedef AccidentDataReader DataReader;
#endif

#endif
    
    char*  timestamp; /* maximum length = (255) */

    char*  route; /* maximum length = (255) */

    char*  vehicle; /* maximum length = (255) */

    DDS_Long  stopNumber;

            
};                        
    
                            
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

    
NDDSUSERDllExport DDS_TypeCode* Accident_get_typecode(void); /* Type code */
    

DDS_SEQUENCE(AccidentSeq, Accident);
        
NDDSUSERDllExport
RTIBool Accident_initialize(
        Accident* self);
        
NDDSUSERDllExport
RTIBool Accident_initialize_ex(
        Accident* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
void Accident_finalize(
        Accident* self);
                        
NDDSUSERDllExport
void Accident_finalize_ex(
        Accident* self,RTIBool deletePointers);
        
NDDSUSERDllExport
RTIBool Accident_copy(
        Accident* dst,
        const Accident* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif



#endif /* accident_63819288_h */
