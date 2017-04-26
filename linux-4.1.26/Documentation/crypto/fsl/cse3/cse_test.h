/*
 * User-space CSE3 crypto requests sample file
 *
 * Copyright (c) 2015 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 or
 * later as publishhed by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _CSE_TEST_
#define _CSE_TEST_

/**
 * Supported CSE crypto requests
 * See Usage: `./cse_test h` for more information
 * about the command line arguments expected by each request
 */

/*
 * M1, M2 and M3 message block sizes as
 * as per SHE key update protocol
 */
#define M1SIZE		16
#define M2SIZE		32
#define M3SIZE		16
/* AES-128 Key/IV size */
#define KEY_SIZE	16
/* CMAC value size */
#define MAC_SIZE	16
/* Size of random value generated by CSE3 */
#define RND_SIZE	16
/* Miyaguchi-Preneel compressed value size */
#define MP_SIZE		16

/* Miyaguchi-Preneel compression */
#define CSE_COMPRESS_MP 'p'
/* Random Value Generator */
#define CSE_GEN_RND		'r'
/* AES-128 CBC/ECB encryption/decryption */
#define CSE_ENCRYPT		'e'
#define CSE_DECRYPT		'd'
/* CMAC generator */
#define CSE_GEN_MAC		'c'
/* CMAC validation */
#define CSE_CHECK_MAC	'v'
/* Load custom/encrypted key based on SHE key update protocol */
#define CSE_LOAD_KEY	'l'
/* Encryption/decryption using previously loaded custom encrypted key */
#define CSE_ENCRYPT_WK	'y'
#define CSE_DECRYPT_WK	'z'
/* Set IV for AES-128 CBC crypto requests */
#define CSE_SET_IV		'i'
/* Set key for encryption/decryption and CMAC requests */
#define CSE_SET_KEY		'k'

#endif /* _CSE_TEST_ */