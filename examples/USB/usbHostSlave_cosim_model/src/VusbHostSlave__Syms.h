// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VusbHostSlave__Syms_H_
#define _VusbHostSlave__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VusbHostSlave.h"
#include "VusbHostSlave_usbHostSlave.h"
#include "VusbHostSlave_usbHostControl.h"
#include "VusbHostSlave_usbSlaveControl.h"
#include "VusbHostSlave_wishBoneBI.h"
#include "VusbHostSlave_hostSlaveMux.h"
#include "VusbHostSlave_usbSerialInterfaceEngine.h"
#include "VusbHostSlave_TxFifo__F40_A6.h"
#include "VusbHostSlave_RxFifo__F40_A6.h"
#include "VusbHostSlave_slaveRxStatusMonitor.h"
#include "VusbHostSlave_fifoMux.h"
#include "VusbHostSlave_hostSlaveMuxBI.h"
#include "VusbHostSlave_lineControlUpdate.h"
#include "VusbHostSlave_SIEReceiver.h"
#include "VusbHostSlave_processRxBit.h"
#include "VusbHostSlave_processRxByte.h"
#include "VusbHostSlave_updateCRC5.h"
#include "VusbHostSlave_updateCRC16.h"
#include "VusbHostSlave_SIETransmitter.h"
#include "VusbHostSlave_processTxByte.h"
#include "VusbHostSlave_USBTxWireArbiter.h"
#include "VusbHostSlave_writeUSBWireData.h"
#include "VusbHostSlave_readUSBWireData.h"
#include "VusbHostSlave_fifoRTL__FB40_A6.h"
#include "VusbHostSlave_TxfifoBI.h"
#include "VusbHostSlave_RxfifoBI.h"
#include "VusbHostSlave_USBHostControlBI.h"
#include "VusbHostSlave_hostcontroller.h"
#include "VusbHostSlave_SOFController.h"
#include "VusbHostSlave_SOFTransmit.h"
#include "VusbHostSlave_sendPacketArbiter.h"
#include "VusbHostSlave_sendPacketCheckPreamble.h"
#include "VusbHostSlave_sendPacket.h"
#include "VusbHostSlave_directControl.h"
#include "VusbHostSlave_HCTxPortArbiter.h"
#include "VusbHostSlave_getPacket.h"
#include "VusbHostSlave_rxStatusMonitor.h"
#include "VusbHostSlave_USBSlaveControlBI.h"
#include "VusbHostSlave_slavecontroller.h"
#include "VusbHostSlave_endpMux.h"
#include "VusbHostSlave_slaveSendPacket.h"
#include "VusbHostSlave_slaveDirectControl.h"
#include "VusbHostSlave_SCTxPortArbiter.h"
#include "VusbHostSlave_slaveGetPacket.h"
#include "VusbHostSlave_dpMem_dc__F8_FB40_A6.h"

// SYMS CLASS
class VusbHostSlave__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VusbHostSlave*                 TOPp;
    VusbHostSlave_usbHostSlave     TOP__v;
    VusbHostSlave_RxFifo__F40_A6   TOP__v__EP0RxFifo;
    VusbHostSlave_RxfifoBI         TOP__v__EP0RxFifo__u_RxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__EP0RxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_TxFifo__F40_A6   TOP__v__EP0TxFifo;
    VusbHostSlave_TxfifoBI         TOP__v__EP0TxFifo__u_TxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__EP0TxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_RxFifo__F40_A6   TOP__v__EP1RxFifo;
    VusbHostSlave_RxfifoBI         TOP__v__EP1RxFifo__u_RxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__EP1RxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_TxFifo__F40_A6   TOP__v__EP1TxFifo;
    VusbHostSlave_TxfifoBI         TOP__v__EP1TxFifo__u_TxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__EP1TxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_RxFifo__F40_A6   TOP__v__EP2RxFifo;
    VusbHostSlave_RxfifoBI         TOP__v__EP2RxFifo__u_RxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__EP2RxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_TxFifo__F40_A6   TOP__v__EP2TxFifo;
    VusbHostSlave_TxfifoBI         TOP__v__EP2TxFifo__u_TxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__EP2TxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_RxFifo__F40_A6   TOP__v__EP3RxFifo;
    VusbHostSlave_RxfifoBI         TOP__v__EP3RxFifo__u_RxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__EP3RxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_TxFifo__F40_A6   TOP__v__EP3TxFifo;
    VusbHostSlave_TxfifoBI         TOP__v__EP3TxFifo__u_TxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__EP3TxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_RxFifo__F40_A6   TOP__v__HostRxFifo;
    VusbHostSlave_RxfifoBI         TOP__v__HostRxFifo__u_RxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__HostRxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__HostRxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_TxFifo__F40_A6   TOP__v__HostTxFifo;
    VusbHostSlave_TxfifoBI         TOP__v__HostTxFifo__u_TxfifoBI;
    VusbHostSlave_fifoRTL__FB40_A6 TOP__v__HostTxFifo__u_fifo;
    VusbHostSlave_dpMem_dc__F8_FB40_A6 TOP__v__HostTxFifo__u_fifo__u_dpMem_dc;
    VusbHostSlave_hostSlaveMux     TOP__v__u_hostSlaveMux;
    VusbHostSlave_hostSlaveMuxBI   TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI;
    VusbHostSlave_usbHostControl   TOP__v__u_usbHostControl;
    VusbHostSlave_HCTxPortArbiter  TOP__v__u_usbHostControl__u_HCTxPortArbiter;
    VusbHostSlave_SOFController    TOP__v__u_usbHostControl__u_SOFController;
    VusbHostSlave_SOFTransmit      TOP__v__u_usbHostControl__u_SOFTransmit;
    VusbHostSlave_USBHostControlBI TOP__v__u_usbHostControl__u_USBHostControlBI;
    VusbHostSlave_directControl    TOP__v__u_usbHostControl__u_directControl;
    VusbHostSlave_getPacket        TOP__v__u_usbHostControl__u_getPacket;
    VusbHostSlave_hostcontroller   TOP__v__u_usbHostControl__u_hostController;
    VusbHostSlave_rxStatusMonitor  TOP__v__u_usbHostControl__u_rxStatusMonitor;
    VusbHostSlave_sendPacket       TOP__v__u_usbHostControl__u_sendPacket;
    VusbHostSlave_sendPacketArbiter TOP__v__u_usbHostControl__u_sendPacketArbiter;
    VusbHostSlave_sendPacketCheckPreamble TOP__v__u_usbHostControl__u_sendPacketCheckPreamble;
    VusbHostSlave_usbSerialInterfaceEngine TOP__v__u_usbSerialInterfaceEngine;
    VusbHostSlave_updateCRC16      TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16;
    VusbHostSlave_updateCRC5       TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5;
    VusbHostSlave_updateCRC16      TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16;
    VusbHostSlave_updateCRC5       TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5;
    VusbHostSlave_SIEReceiver      TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver;
    VusbHostSlave_SIETransmitter   TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter;
    VusbHostSlave_USBTxWireArbiter TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter;
    VusbHostSlave_lineControlUpdate TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate;
    VusbHostSlave_processRxBit     TOP__v__u_usbSerialInterfaceEngine__u_processRxBit;
    VusbHostSlave_processRxByte    TOP__v__u_usbSerialInterfaceEngine__u_processRxByte;
    VusbHostSlave_processTxByte    TOP__v__u_usbSerialInterfaceEngine__u_processTxByte;
    VusbHostSlave_readUSBWireData  TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData;
    VusbHostSlave_writeUSBWireData TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData;
    VusbHostSlave_usbSlaveControl  TOP__v__u_usbSlaveControl;
    VusbHostSlave_SCTxPortArbiter  TOP__v__u_usbSlaveControl__u_SCTxPortArbiter;
    VusbHostSlave_USBSlaveControlBI TOP__v__u_usbSlaveControl__u_USBSlaveControlBI;
    VusbHostSlave_endpMux          TOP__v__u_usbSlaveControl__u_endpMux;
    VusbHostSlave_fifoMux          TOP__v__u_usbSlaveControl__u_fifoMux;
    VusbHostSlave_slaveDirectControl TOP__v__u_usbSlaveControl__u_slaveDirectControl;
    VusbHostSlave_slaveGetPacket   TOP__v__u_usbSlaveControl__u_slaveGetPacket;
    VusbHostSlave_slaveRxStatusMonitor TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor;
    VusbHostSlave_slaveSendPacket  TOP__v__u_usbSlaveControl__u_slaveSendPacket;
    VusbHostSlave_slavecontroller  TOP__v__u_usbSlaveControl__u_slavecontroller;
    VusbHostSlave_wishBoneBI       TOP__v__u_wishBoneBI;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VusbHostSlave__Syms(VusbHostSlave* topp, const char* namep);
    ~VusbHostSlave__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);
#endif  /*guard*/
