/*!
 * \file      Commissioning_tracker.h
 *
 * \brief     End device commissioning parameters
 *
 * Revised BSD License
 * Copyright Semtech Corporation 2020. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Semtech corporation nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL SEMTECH CORPORATION BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __COMMISSIONING_TRACKER_H__
#define __COMMISSIONING_TRACKER_H__

#ifdef __cplusplus
extern "C" {
#endif

/*
 * -----------------------------------------------------------------------------
 * --- DEPENDENCIES ------------------------------------------------------------
 */

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC MACROS -----------------------------------------------------------
 */

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC CONSTANTS --------------------------------------------------------
 */

/*!
 ******************************************************************************
 ********************************** WARNING ***********************************
 ******************************************************************************
  The crypto-element implementation supports both 1.0.x and 1.1.x LoRaWAN
  versions of the specification.
  Thus it has been decided to use the 1.1.x keys and EUI name definitions.
  The below table shows the names equivalence between versions:
               +---------------------+-------------------------+
               |       1.0.x         |          1.1.x          |
               +=====================+=========================+
               | LORAWAN_DEVICE_EUI  | LORAWAN_DEVICE_EUI      |
               +---------------------+-------------------------+
               | LORAWAN_APP_EUI     | LORAWAN_JOIN_EUI        |
               +---------------------+-------------------------+
               | LORAWAN_APP_KEY     | LORAWAN_NWK_KEY         |
               +---------------------+-------------------------+

 ******************************************************************************
 ******************************************************************************
 ******************************************************************************
 */

/*!
 * \brief IEEE Organizationally Unique Identifier ( OUI ) (big endian)
 * \remark This is unique to a company or organization
 */
#define IEEE_OUI 0x00, 0x00, 0x00

/*!
 * \brief Tracker device IEEE EUI (big endian)
 *
 * \remark In this application the value is automatically generated by calling
 *         BoardGetUniqueId function
 */
#define LORAWAN_DEVICE_EUI                     \
    {                                          \
        0x00, 0x04, 0xA3, 0x10, 0x00, 0x1A, 0xAE, 0x9B \
    }
#define LORAWAN_DEVICE_EUI_LEN 8

/*!
 * \brief App/Join server IEEE EUI (big endian)
 */
#define LORAWAN_JOIN_EUI                               \
    {                                                  \
        0xDE, 0xAD, 0xBE, 0xEF, 0xAA, 0xCC, 0xDD, 0x12 \
    }
#define LORAWAN_JOIN_EUI_LEN 8

/*!
 * \brief loRaWAN Application Key (big endian)
 */
#define LORAWAN_APP_KEY                                                                                \
    {                                                                                                  \
        0xE7, 0x0B, 0x44, 0x61, 0xB7, 0xE8, 0x71, 0x1B, 0x50, 0xDC, 0xDE, 0xDA, 0x17, 0x44, 0x57, 0xBF \
    }
#define LORAWAN_APP_KEY_LEN 16

/*!
 * \brief Use or not the Semtech join server.
 */
#define USE_SEMTECH_JOIN_SERVE 0

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC TYPES ------------------------------------------------------------
 */

/*
 * -----------------------------------------------------------------------------
 * --- PUBLIC FUNCTIONS PROTOTYPES ---------------------------------------------
 */

#ifdef __cplusplus
}
#endif

#endif  // __COMMISSIONING_TRACKER_H__

/* --- EOF ------------------------------------------------------------------ */
