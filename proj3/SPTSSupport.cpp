/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SPTS.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#include "SPTSSupport.h"
#include "SPTSPlugin.h"


using namespace System;
using namespace DDS;
    
/* ========================================================================= */

// ---------------------------------------------------------------------------
// PositionDataWriter
// ---------------------------------------------------------------------------

PositionDataWriter::PositionDataWriter(
        System::IntPtr impl) : DDS::TypedDataWriter<Position^>(impl) {
    // empty
}


// ---------------------------------------------------------------------------
// PositionDataReader
// ---------------------------------------------------------------------------

PositionDataReader::PositionDataReader(
        System::IntPtr impl) : DDS::TypedDataReader<Position^>(impl) {
    // empty
}


// ---------------------------------------------------------------------------
// PositionTypeSupport
// ---------------------------------------------------------------------------

PositionTypeSupport::PositionTypeSupport()
        : DDS::TypedTypeSupport<Position^>(
            PositionPlugin::get_instance()) {

    _type_plugin = PositionPlugin::get_instance();
}

void PositionTypeSupport::register_type(
        DDS::DomainParticipant^ participant,
        System::String^ type_name) {

    get_instance()->register_type_untyped(participant, type_name);
}

void PositionTypeSupport::unregister_type(
        DDS::DomainParticipant^ participant,
        System::String^ type_name) {

    get_instance()->unregister_type_untyped(participant, type_name);
}

Position^ PositionTypeSupport::create_data() {
    return gcnew Position();
}

Position^ PositionTypeSupport::create_data_untyped() {
    return create_data();
}

void PositionTypeSupport::delete_data(
        Position^ a_data) {
    /* If the generated type does not implement IDisposable (the default),
     * the following will no a no-op.
     */
    delete a_data;
}

void PositionTypeSupport::print_data(Position^ a_data) {
     get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
}

void PositionTypeSupport::copy_data(
        Position^ dst, Position^ src) {

    get_instance()->copy_data_untyped(dst, src);
}

System::String^ PositionTypeSupport::get_type_name() {
    return TYPENAME;
}

System::String^ PositionTypeSupport::get_type_name_untyped() {
    return TYPENAME;
}

DDS::DataReader^ PositionTypeSupport::create_datareaderI(
        System::IntPtr impl) {

    return gcnew PositionDataReader(impl);
}

DDS::DataWriter^ PositionTypeSupport::create_datawriterI(
        System::IntPtr impl) {

    return gcnew PositionDataWriter(impl);
}

PositionTypeSupport^
PositionTypeSupport::get_instance() {
    if (_singleton == nullptr) {
        _singleton = gcnew PositionTypeSupport();
    }
    return _singleton;
}
    
/* ========================================================================= */

// ---------------------------------------------------------------------------
// AccidentDataWriter
// ---------------------------------------------------------------------------

AccidentDataWriter::AccidentDataWriter(
        System::IntPtr impl) : DDS::TypedDataWriter<Accident^>(impl) {
    // empty
}


// ---------------------------------------------------------------------------
// AccidentDataReader
// ---------------------------------------------------------------------------

AccidentDataReader::AccidentDataReader(
        System::IntPtr impl) : DDS::TypedDataReader<Accident^>(impl) {
    // empty
}


// ---------------------------------------------------------------------------
// AccidentTypeSupport
// ---------------------------------------------------------------------------

AccidentTypeSupport::AccidentTypeSupport()
        : DDS::TypedTypeSupport<Accident^>(
            AccidentPlugin::get_instance()) {

    _type_plugin = AccidentPlugin::get_instance();
}

void AccidentTypeSupport::register_type(
        DDS::DomainParticipant^ participant,
        System::String^ type_name) {

    get_instance()->register_type_untyped(participant, type_name);
}

void AccidentTypeSupport::unregister_type(
        DDS::DomainParticipant^ participant,
        System::String^ type_name) {

    get_instance()->unregister_type_untyped(participant, type_name);
}

Accident^ AccidentTypeSupport::create_data() {
    return gcnew Accident();
}

Accident^ AccidentTypeSupport::create_data_untyped() {
    return create_data();
}

void AccidentTypeSupport::delete_data(
        Accident^ a_data) {
    /* If the generated type does not implement IDisposable (the default),
     * the following will no a no-op.
     */
    delete a_data;
}

void AccidentTypeSupport::print_data(Accident^ a_data) {
     get_instance()->_type_plugin->print_data(a_data, nullptr, 0);
}

void AccidentTypeSupport::copy_data(
        Accident^ dst, Accident^ src) {

    get_instance()->copy_data_untyped(dst, src);
}

System::String^ AccidentTypeSupport::get_type_name() {
    return TYPENAME;
}

System::String^ AccidentTypeSupport::get_type_name_untyped() {
    return TYPENAME;
}

DDS::DataReader^ AccidentTypeSupport::create_datareaderI(
        System::IntPtr impl) {

    return gcnew AccidentDataReader(impl);
}

DDS::DataWriter^ AccidentTypeSupport::create_datawriterI(
        System::IntPtr impl) {

    return gcnew AccidentDataWriter(impl);
}

AccidentTypeSupport^
AccidentTypeSupport::get_instance() {
    if (_singleton == nullptr) {
        _singleton = gcnew AccidentTypeSupport();
    }
    return _singleton;
}
    