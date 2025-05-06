APRIORI DXE {
  # First, install the PCD driver and call DxeInit
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/a05s/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

  # Next, install cpu protocol and enable the interrupt controller
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

  # Core Drivers
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/a05s/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  
  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/a05s/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

  INF Binaries/a05s/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/a05s/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf

  # Use Binary Version of these two Drivers to Make UFS work correct.
  INF Binaries/a05s/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF Binaries/a05s/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/a05s/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf

  INF Binaries/a05s/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
  INF Binaries/a05s/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf

  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/a05s/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/a05s/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/a05s/QcomPkg/Drivers/PILDxe/PILDxe.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/a05s/QcomPkg/Drivers/FontDxe/FontDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/a05s/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/a05s/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF Binaries/generic/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/generic/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/a05s/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/SamsungDxe/GuidedFvDxe/GuidedFvDxe.inf

  INF Binaries/a05s/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/MacDxe/MacDxe.inf
  INF Binaries/a05s/QcomPkg/SocPkg/DivarPkg/Drivers/RNGDxe/RngDxe.inf
  INF Binaries/a05s/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}
