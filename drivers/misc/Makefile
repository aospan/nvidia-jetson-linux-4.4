#
# Makefile for misc devices that really don't fit anywhere else.
#
ifeq ($(NV_BUILD_CONFIGURATION_IS_COVERAGE),1)
GCOV_PROFILE_bluedroid_pm.o :=y
endif

obj-$(CONFIG_IBM_ASM)		+= ibmasm/
obj-$(CONFIG_AD525X_DPOT)	+= ad525x_dpot.o
obj-$(CONFIG_AD525X_DPOT_I2C)	+= ad525x_dpot-i2c.o
obj-$(CONFIG_AD525X_DPOT_SPI)	+= ad525x_dpot-spi.o
obj-$(CONFIG_INTEL_MID_PTI)	+= pti.o
obj-$(CONFIG_ATMEL_SSC)		+= atmel-ssc.o
obj-$(CONFIG_ATMEL_TCLIB)	+= atmel_tclib.o
obj-$(CONFIG_BMP085)		+= bmp085.o
obj-$(CONFIG_BMP085_I2C)	+= bmp085-i2c.o
obj-$(CONFIG_BMP085_SPI)	+= bmp085-spi.o
obj-$(CONFIG_DUMMY_IRQ)		+= dummy-irq.o
obj-$(CONFIG_ICS932S401)	+= ics932s401.o
obj-$(CONFIG_LKDTM)		+= lkdtm.o
obj-$(CONFIG_TIFM_CORE)       	+= tifm_core.o
obj-$(CONFIG_TIFM_7XX1)       	+= tifm_7xx1.o
obj-$(CONFIG_PHANTOM)		+= phantom.o
obj-$(CONFIG_QCOM_COINCELL)	+= qcom-coincell.o
obj-$(CONFIG_SENSORS_BH1780)	+= bh1780gli.o
obj-$(CONFIG_SENSORS_BH1770)	+= bh1770glc.o
obj-$(CONFIG_SENSORS_APDS990X)	+= apds990x.o
obj-$(CONFIG_SGI_IOC4)		+= ioc4.o
obj-$(CONFIG_ENCLOSURE_SERVICES) += enclosure.o
obj-$(CONFIG_KGDB_TESTS)	+= kgdbts.o
obj-$(CONFIG_SGI_XP)		+= sgi-xp/
obj-$(CONFIG_SGI_GRU)		+= sgi-gru/
obj-$(CONFIG_CS5535_MFGPT)	+= cs5535-mfgpt.o
obj-$(CONFIG_HP_ILO)		+= hpilo.o
obj-$(CONFIG_APDS9802ALS)	+= apds9802als.o
obj-$(CONFIG_ISL29003)		+= isl29003.o
obj-$(CONFIG_ISL29020)		+= isl29020.o
obj-$(CONFIG_SENSORS_TSL2550)	+= tsl2550.o
obj-$(CONFIG_DS1682)		+= ds1682.o
obj-$(CONFIG_TI_DAC7512)	+= ti_dac7512.o
obj-$(CONFIG_C2PORT)		+= c2port/
obj-$(CONFIG_HMC6352)		+= hmc6352.o
obj-y				+= eeprom/
obj-y				+= cb710/
obj-$(CONFIG_SPEAR13XX_PCIE_GADGET)	+= spear13xx_pcie_gadget.o
obj-$(CONFIG_VMWARE_BALLOON)	+= vmw_balloon.o
obj-$(CONFIG_ARM_CHARLCD)	+= arm-charlcd.o
obj-$(CONFIG_PCH_PHUB)		+= pch_phub.o
obj-y				+= ti-st/
obj-y				+= lis3lv02d/
obj-$(CONFIG_USB_SWITCH_FSA9480) += fsa9480.o
obj-$(CONFIG_ALTERA_STAPL)	+=altera-stapl/
obj-$(CONFIG_INTEL_MEI)		+= mei/
obj-$(CONFIG_VMWARE_VMCI)	+= vmw_vmci/
obj-$(CONFIG_LATTICE_ECP3_CONFIG)	+= lattice-ecp3-config.o
obj-$(CONFIG_SRAM)		+= sram.o
obj-y				+= mic/
obj-$(CONFIG_GENWQE)		+= genwqe/
obj-$(CONFIG_ECHO)		+= echo/
obj-$(CONFIG_VEXPRESS_SYSCFG)	+= vexpress-syscfg.o
obj-$(CONFIG_CXL_BASE)		+= cxl/
obj-$(CONFIG_UID_CPUTIME) += uid_cputime.o
obj-$(CONFIG_BLUEDROID_PM)      += bluedroid_pm.o
obj-$(CONFIG_GPS_HWGEOFENCING)  += gps_wake.o
obj-$(CONFIG_MODS) 		+= mods/
obj-$(CONFIG_SENSORS_NCT1008)	+= nct1008.o
obj-$(CONFIG_TEGRA_CEC_SUPPORT)	+= tegra-cec/
obj-$(CONFIG_THERM_EST)		+= therm_est.o
CFLAGS_tegra-throughput.o        = -Werror
ifeq ($(CONFIG_ARM64),y)
CFLAGS_tegra-throughput.o       += -Iarch/arm/mach-tegra/include
endif
obj-$(CONFIG_CPULOAD_MONITOR)   += cpuload.o
obj-$(CONFIG_FAN_THERM_EST)	+= therm_fan_est.o
obj-$(CONFIG_NVS_DFSH)		+= nvs-dfsh/
obj-$(CONFIG_SAF775x_HWDEP)	+= saf775x/
obj-$(CONFIG_SAF36XX_HWDEP) += saf775x/
obj-$(CONFIG_EQOS_APE_HWDEP)    += eqos_ape/
obj-$(CONFIG_TEGRA_PROFILER)	+= tegra-profiler/
obj-$(CONFIG_TEGRA_CPC)		+= tegra_cpc.o
obj-$(CONFIG_NVS)		+= nvs/
obj-$(CONFIG_BM92TXX)		+= bm92txx.o

GCOV_PROFILE_cpuload.o := y
obj-y				+= inter-tegra/
