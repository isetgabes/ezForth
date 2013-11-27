/**
  ******************************************************************************
  * @file    mod_ethernet.h
  * @author  MCD Application Team
  * @version V1.3.0
  * @date    14-January-2013
  * @brief   Header for mod_ethernet.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2013 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MOD_ETHERNET_H
#define __MOD_ETHERNET_H

/* Includes ------------------------------------------------------------------*/
#include "global_includes.h"
#include "mod_core.h"
#include "mod_ethernet_config.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define MOD_ETHERNET_VER           1
#define MOD_ETHERNET_UID           0x30
/* Exported macro ------------------------------------------------------------*/
/* Exported variables ------------------------------------------------------- */
extern MOD_InitTypeDef  mod_ethernet ;
extern ETHERNET_SettingsTypeDef  EthernetSettings;
/* Exported functions ------------------------------------------------------- */
extern void ETHERNET_UpdateConnState(uint8_t conn_state);
extern void ETHERNET_UpdateDHCPState(uint8_t state, uint8_t *ip_add);
extern void ETHERNET_DHCPFailState(void);
extern void ETHERNET_UpdateIcon(const uint8_t *new_icon);
extern void ETHERNET_UpdateInitDisplay (void);


#endif /* __MOD_ETHERNET_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/