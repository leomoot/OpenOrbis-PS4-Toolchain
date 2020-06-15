#pragma once

// Params should go here....

// code goes here
// example ABI_SYSV int test(int input);
void sceUsbdAllocTransfer();
void sceUsbdAttachKernelDriver();
void sceUsbdBulkTransfer();
void sceUsbdCancelTransfer();
void sceUsbdCheckConnected();
void sceUsbdClaimInterface();
void sceUsbdClearHalt();
void sceUsbdClose();
void sceUsbdControlTransfer();
void sceUsbdControlTransferGetData();
void sceUsbdControlTransferGetSetup();
void sceUsbdDetachKernelDriver();
void sceUsbdEventHandlerActive();
void sceUsbdEventHandlingOk();
void sceUsbdExit();
void sceUsbdFillBulkTransfer();
void sceUsbdFillControlSetup();
void sceUsbdFillControlTransfer();
void sceUsbdFillInterruptTransfer();
void sceUsbdFillIsoTransfer();
void sceUsbdFreeConfigDescriptor();
void sceUsbdFreeDeviceList();
void sceUsbdFreeTransfer();
void sceUsbdGetActiveConfigDescriptor();
void sceUsbdGetBusNumber();
void sceUsbdGetConfigDescriptor();
void sceUsbdGetConfigDescriptorByValue();
void sceUsbdGetConfiguration();
void sceUsbdGetDescriptor();
void sceUsbdGetDevice();
void sceUsbdGetDeviceAddress();
void sceUsbdGetDeviceDescriptor();
void sceUsbdGetDeviceList();
void sceUsbdGetDeviceSpeed();
void sceUsbdGetIsoPacketBuffer();
void sceUsbdGetMaxIsoPacketSize();
void sceUsbdGetMaxPacketSize();
void sceUsbdGetStringDescriptor();
void sceUsbdGetStringDescriptorAscii();
void sceUsbdHandleEvents();
void sceUsbdHandleEventsLocked();
void sceUsbdHandleEventsTimeout();
void sceUsbdInit();
void sceUsbdInterruptTransfer();
void sceUsbdKernelDriverActive();
void sceUsbdLockEvents();
void sceUsbdLockEventWaiters();
void sceUsbdOpen();
void sceUsbdOpenDeviceWithVidPid();
void sceUsbdRefDevice();
void sceUsbdReleaseInterface();
void sceUsbdResetDevice();
void sceUsbdSetConfiguration();
void sceUsbdSetInterfaceAltSetting();
void sceUsbdSetIsoPacketLengths();
void sceUsbdSubmitTransfer();
void sceUsbdTryLockEvents();
void sceUsbdUnlockEvents();
void sceUsbdUnlockEventWaiters();
void sceUsbdUnrefDevice();
void sceUsbdWaitForEvent();