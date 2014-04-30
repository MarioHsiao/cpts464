/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SPTS.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#pragma once


struct DDS_TypeCode;
    

using namespace System;
using namespace DDS;

    

public ref struct Position
        : public DDS::ICopyable<Position^> {
    // --- Declared members: -------------------------------------------------
  public:            
    
    System::String^ timestamp; // maximum length = (255)
    System::String^ route; // maximum length = (255)
    System::String^ vehicle; // maximum length = (255)
    System::Int32 stopNumber;
    System::Int32 numStops;
    System::Int32 timeBetweenStops;
    System::String^ trafficConditions; // maximum length = (255)
    System::Int32 fillInRatio;

    // --- Static constants: -------------------------------------    
public:
    


#define Position_LAST_MEMBER_ID 7

    // --- Constructors and destructors: -------------------------------------
  public:
    Position();

  // --- Utility methods: --------------------------------------------------
  public:
  virtual void clear();

  virtual System::Boolean copy_from(Position^ src);

    virtual System::Boolean Equals(System::Object^ other) override;

    
    static DDS::TypeCode^ get_typecode();

  private:
    static DDS::TypeCode^ _typecode;

}; // class Position




public ref class PositionSeq sealed
        : public DDS::UserRefSequence<Position^> {
public:
    PositionSeq() :
            DDS::UserRefSequence<Position^>() {
        // empty
    }
    PositionSeq(System::Int32 max) :
            DDS::UserRefSequence<Position^>(max) {
        // empty
    }
    PositionSeq(PositionSeq^ src) :
            DDS::UserRefSequence<Position^>(src) {
        // empty
    }
};


  #define NDDSUSERDllExport

NDDSUSERDllExport DDS_TypeCode* Position_get_typecode();


public ref struct Accident
        : public DDS::ICopyable<Accident^> {
    // --- Declared members: -------------------------------------------------
  public:            
    
    System::String^ timestamp; // maximum length = (255)
    System::String^ route; // maximum length = (255)
    System::String^ vehicle; // maximum length = (255)
    System::Int32 stopNumber;

    // --- Static constants: -------------------------------------    
public:
    


#define Accident_LAST_MEMBER_ID 3

    // --- Constructors and destructors: -------------------------------------
  public:
    Accident();

  // --- Utility methods: --------------------------------------------------
  public:
  virtual void clear();

  virtual System::Boolean copy_from(Accident^ src);

    virtual System::Boolean Equals(System::Object^ other) override;

    
    static DDS::TypeCode^ get_typecode();

  private:
    static DDS::TypeCode^ _typecode;

}; // class Accident




public ref class AccidentSeq sealed
        : public DDS::UserRefSequence<Accident^> {
public:
    AccidentSeq() :
            DDS::UserRefSequence<Accident^>() {
        // empty
    }
    AccidentSeq(System::Int32 max) :
            DDS::UserRefSequence<Accident^>(max) {
        // empty
    }
    AccidentSeq(AccidentSeq^ src) :
            DDS::UserRefSequence<Accident^>(src) {
        // empty
    }
};


  #define NDDSUSERDllExport

NDDSUSERDllExport DDS_TypeCode* Accident_get_typecode();
