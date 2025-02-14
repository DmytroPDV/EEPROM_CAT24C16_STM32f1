// EEPROM_CAT24C16.h

#ifndef EEPROM_H
#define EEPROM_H

#include "stm32f1xx_hal.h"  // Підключи свою HAL бібліотеку, якщо в тебе інша серія STM32, зміни імпорт

#define EEPROM_DEV_ADDR 0x50  // Базова I2C-адреса CAT24C16

HAL_StatusTypeDef EEPROM_WriteByte(uint16_t memAddr, uint8_t data);
HAL_StatusTypeDef EEPROM_ReadByte(uint16_t memAddr, uint8_t *data);
HAL_StatusTypeDef EEPROM_WriteUint16(uint16_t memAddr, uint16_t data);
HAL_StatusTypeDef EEPROM_ReadUint16(uint16_t memAddr, uint16_t *data);
HAL_StatusTypeDef EEPROM_WriteUint32(uint16_t memAddr, uint32_t data);
HAL_StatusTypeDef EEPROM_ReadUint32(uint16_t memAddr, uint32_t *data);
HAL_StatusTypeDef EEPROM_WriteBuffer(uint16_t memAddr, uint8_t *data, uint16_t len);
HAL_StatusTypeDef EEPROM_ReadBuffer(uint16_t memAddr, uint8_t *data, uint16_t len);

#endif // EEPROM_H

