// EEPROM_CAT24C16.h

#ifndef EEPROM_H
#define EEPROM_H

#include "stm32f1xx_hal.h"  // Connect your HAL library, if you have a different STM32 series, change the import

#define EEPROM_DEV_ADDR 0x50  // Basic I2C address CAT24C16

HAL_StatusTypeDef EEPROM_WriteByte(uint16_t memAddr, uint8_t data);
HAL_StatusTypeDef EEPROM_ReadByte(uint16_t memAddr, uint8_t *data);
HAL_StatusTypeDef EEPROM_WriteUint16(uint16_t memAddr, uint16_t data);
HAL_StatusTypeDef EEPROM_ReadUint16(uint16_t memAddr, uint16_t *data);
HAL_StatusTypeDef EEPROM_WriteUint32(uint16_t memAddr, uint32_t data);
HAL_StatusTypeDef EEPROM_ReadUint32(uint16_t memAddr, uint32_t *data);
HAL_StatusTypeDef EEPROM_WriteBuffer(uint16_t memAddr, uint8_t *data, uint16_t len);
HAL_StatusTypeDef EEPROM_ReadBuffer(uint16_t memAddr, uint8_t *data, uint16_t len);

#endif 

