/*
 * Tune.h
 *
 *  Created on: Feb 7, 2021
 *      Author: Ian Eperson - ian.eperson@dedf.co.uk
 *
 *  Contains the Midi files to play Jingle Bells and Happy Birthday
 */

#ifndef TUNE_H_
#define TUNE_H_

#define HAPPYBIRTHDAY

const unsigned char tune_mid[] PROGMEM = {
/* Happy Birthday */
#ifdef HAPPYBIRTHDAY
0x4d, 0x54, 0x68, 0x64, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x02, 0x01, 0x00, 0x4d, 0x54,
0x72, 0x6b, 0x00, 0x00, 0x00, 0x45, 0x00, 0xff, 0x03, 0x0e, 0x48, 0x61, 0x70, 0x70, 0x79, 0x20,
0x42, 0x69, 0x72, 0x74, 0x68, 0x64, 0x61, 0x79, 0x00, 0xff, 0x01, 0x05, 0x74, 0x72, 0x61, 0x64,
0x2e, 0x00, 0xff, 0x58, 0x04, 0x03, 0x02, 0x18, 0x08, 0x00, 0xff, 0x59, 0x02, 0xff, 0x00, 0x84,
0x00, 0xff, 0x51, 0x03, 0x09, 0x27, 0xc0, 0xa2, 0x00, 0xff, 0x51, 0x03, 0x0d, 0xbb, 0xa0, 0x81,
0x7f, 0xff, 0x51, 0x03, 0x09, 0x27, 0xc0, 0x01, 0xff, 0x2f, 0x00, 0x4d, 0x54, 0x72, 0x6b, 0x00,
0x00, 0x00, 0xfd, 0x84, 0x00, 0xc0, 0x00, 0x00, 0xb0, 0x79, 0x00, 0x00, 0xb0, 0x40, 0x00, 0x00,
0xb0, 0x5b, 0x28, 0x00, 0xb0, 0x0a, 0x4a, 0x00, 0xb0, 0x07, 0x6a, 0x00, 0x90, 0x3c, 0x41, 0x81,
0x00, 0x80, 0x3c, 0x00, 0x00, 0x90, 0x3c, 0x47, 0x81, 0x00, 0x80, 0x3c, 0x00, 0x00, 0x90, 0x3e,
0x4f, 0x82, 0x00, 0x80, 0x3e, 0x00, 0x00, 0x90, 0x3c, 0x43, 0x82, 0x00, 0x80, 0x3c, 0x00, 0x00,
0x90, 0x41, 0x55, 0x82, 0x00, 0x80, 0x41, 0x00, 0x00, 0x90, 0x40, 0x4b, 0x84, 0x00, 0x80, 0x40,
0x00, 0x00, 0x90, 0x3c, 0x49, 0x81, 0x00, 0x80, 0x3c, 0x00, 0x00, 0x90, 0x3c, 0x49, 0x81, 0x00,
0x80, 0x3c, 0x00, 0x00, 0x90, 0x3e, 0x50, 0x82, 0x00, 0x80, 0x3e, 0x00, 0x00, 0x90, 0x3c, 0x47,
0x82, 0x00, 0x80, 0x3c, 0x00, 0x00, 0x90, 0x43, 0x5b, 0x82, 0x00, 0x80, 0x43, 0x00, 0x00, 0x90,
0x41, 0x49, 0x84, 0x00, 0x80, 0x41, 0x00, 0x00, 0x90, 0x3c, 0x42, 0x81, 0x00, 0x80, 0x3c, 0x00,
0x00, 0x90, 0x3c, 0x48, 0x81, 0x00, 0x80, 0x3c, 0x00, 0x00, 0x90, 0x48, 0x5c, 0x82, 0x00, 0x80,
0x48, 0x00, 0x00, 0x90, 0x45, 0x48, 0x82, 0x00, 0x80, 0x45, 0x00, 0x00, 0x90, 0x41, 0x3f, 0x82,
0x00, 0x80, 0x41, 0x00, 0x00, 0x90, 0x40, 0x4b, 0x82, 0x00, 0x80, 0x40, 0x00, 0x00, 0x90, 0x3e,
0x47, 0x82, 0x00, 0x80, 0x3e, 0x00, 0x00, 0x90, 0x46, 0x5b, 0x81, 0x00, 0x80, 0x46, 0x00, 0x00,
0x90, 0x46, 0x4a, 0x81, 0x00, 0x80, 0x46, 0x00, 0x00, 0x90, 0x45, 0x45, 0x82, 0x00, 0x80, 0x45,
0x00, 0x00, 0x90, 0x41, 0x44, 0x82, 0x00, 0x80, 0x41, 0x00, 0x00, 0x90, 0x43, 0x4d, 0x82, 0x00,
0x80, 0x43, 0x00, 0x00, 0x90, 0x41, 0x49, 0x86, 0x00, 0x80, 0x41, 0x00, 0x01, 0xff, 0x2f, 0x00,
#endif
/* Jingle Bells */
#ifdef JINGLEBELLS
0x4d, 0x54, 0x68, 0x64, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x03, 0x01, 0xe0, 0x4d, 0x54,
0x72, 0x6b, 0x00, 0x00, 0x00, 0x2f, 0x00, 0xff, 0x51, 0x03, 0x07, 0xa1, 0x20, 0x00, 0xff, 0x59,
0x02, 0x01, 0x00, 0x00, 0xff, 0x58, 0x04, 0x06, 0x03, 0x24, 0x08, 0x00, 0xff, 0x03, 0x10, 0x4a,
0x69, 0x6e, 0x67, 0x6c, 0x65, 0x20, 0x42, 0x65, 0x6c, 0x6c, 0x73, 0x20, 0x5b, 0x47, 0x5d, 0x82,
0xe8, 0x19, 0xff, 0x2f, 0x00, 0x4d, 0x54, 0x72, 0x6b, 0x00, 0x00, 0x03, 0xaa, 0x00, 0xff, 0x03,
0x10, 0x4a, 0x69, 0x6e, 0x67, 0x6c, 0x65, 0x20, 0x42, 0x65, 0x6c, 0x6c, 0x73, 0x20, 0x5b, 0x47,
0x5d, 0x00, 0xff, 0x01, 0x25, 0x5a, 0x3a, 0x4a, 0x6f, 0x68, 0x6e, 0x20, 0x43, 0x68, 0x61, 0x6d,
0x62, 0x65, 0x72, 0x73, 0x20, 0x3c, 0x6a, 0x63, 0x3a, 0x74, 0x72, 0x69, 0x6c, 0x6c, 0x69, 0x61,
0x6e, 0x2e, 0x6d, 0x69, 0x74, 0x2e, 0x65, 0x64, 0x75, 0x3e, 0x00, 0x90, 0x3e, 0x69, 0x83, 0x5f,
0x80, 0x3e, 0x00, 0x01, 0x90, 0x47, 0x50, 0x81, 0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x45, 0x5f,
0x83, 0x5f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x43, 0x50, 0x81, 0x6f, 0x80, 0x43, 0x00, 0x01, 0x90,
0x3e, 0x69, 0x87, 0x3f, 0x80, 0x3e, 0x00, 0x01, 0x90, 0x3b, 0x50, 0x81, 0x6f, 0x80, 0x3b, 0x00,
0x01, 0x90, 0x3c, 0x50, 0x81, 0x6f, 0x80, 0x3c, 0x00, 0x01, 0x90, 0x3e, 0x69, 0x83, 0x5f, 0x80,
0x3e, 0x00, 0x01, 0x90, 0x47, 0x50, 0x81, 0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x45, 0x5f, 0x83,
0x5f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x43, 0x50, 0x81, 0x6f, 0x80, 0x43, 0x00, 0x01, 0x90, 0x40,
0x69, 0x8b, 0x1f, 0x80, 0x40, 0x00, 0x01, 0x90, 0x40, 0x69, 0x83, 0x5f, 0x80, 0x40, 0x00, 0x01,
0x90, 0x48, 0x50, 0x81, 0x6f, 0x80, 0x48, 0x00, 0x01, 0x90, 0x47, 0x5f, 0x83, 0x5f, 0x80, 0x47,
0x00, 0x01, 0x90, 0x45, 0x50, 0x81, 0x6f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x42, 0x69, 0x8b, 0x1f,
0x80, 0x42, 0x00, 0x01, 0x90, 0x4a, 0x69, 0x83, 0x5f, 0x80, 0x4a, 0x00, 0x01, 0x90, 0x4a, 0x50,
0x81, 0x6f, 0x80, 0x4a, 0x00, 0x01, 0x90, 0x48, 0x5f, 0x83, 0x5f, 0x80, 0x48, 0x00, 0x01, 0x90,
0x45, 0x50, 0x81, 0x6f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x47, 0x69, 0x8b, 0x1f, 0x80, 0x47, 0x00,
0x01, 0x90, 0x3e, 0x69, 0x83, 0x5f, 0x80, 0x3e, 0x00, 0x01, 0x90, 0x47, 0x50, 0x81, 0x6f, 0x80,
0x47, 0x00, 0x01, 0x90, 0x45, 0x5f, 0x83, 0x5f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x43, 0x50, 0x81,
0x6f, 0x80, 0x43, 0x00, 0x01, 0x90, 0x3e, 0x69, 0x87, 0x3f, 0x80, 0x3e, 0x00, 0x01, 0x90, 0x3b,
0x50, 0x81, 0x6f, 0x80, 0x3b, 0x00, 0x01, 0x90, 0x3c, 0x50, 0x81, 0x6f, 0x80, 0x3c, 0x00, 0x01,
0x90, 0x3e, 0x69, 0x83, 0x5f, 0x80, 0x3e, 0x00, 0x01, 0x90, 0x47, 0x50, 0x81, 0x6f, 0x80, 0x47,
0x00, 0x01, 0x90, 0x45, 0x5f, 0x83, 0x5f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x43, 0x50, 0x81, 0x6f,
0x80, 0x43, 0x00, 0x01, 0x90, 0x40, 0x69, 0x8b, 0x1f, 0x80, 0x40, 0x00, 0x01, 0x90, 0x40, 0x69,
0x83, 0x5f, 0x80, 0x40, 0x00, 0x01, 0x90, 0x48, 0x50, 0x81, 0x6f, 0x80, 0x48, 0x00, 0x01, 0x90,
0x47, 0x5f, 0x83, 0x5f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x45, 0x50, 0x81, 0x6f, 0x80, 0x45, 0x00,
0x01, 0x90, 0x4a, 0x69, 0x83, 0x5f, 0x80, 0x4a, 0x00, 0x01, 0x90, 0x4a, 0x50, 0x81, 0x6f, 0x80,
0x4a, 0x00, 0x01, 0x90, 0x4a, 0x5f, 0x83, 0x5f, 0x80, 0x4a, 0x00, 0x01, 0x90, 0x4a, 0x50, 0x81,
0x6f, 0x80, 0x4a, 0x00, 0x01, 0x90, 0x4c, 0x69, 0x83, 0x5f, 0x80, 0x4c, 0x00, 0x01, 0x90, 0x4a,
0x50, 0x81, 0x6f, 0x80, 0x4a, 0x00, 0x01, 0x90, 0x48, 0x5f, 0x83, 0x5f, 0x80, 0x48, 0x00, 0x01,
0x90, 0x45, 0x50, 0x81, 0x6f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x43, 0x69, 0x85, 0x4f, 0x80, 0x43,
0x00, 0x01, 0x90, 0x4a, 0x5f, 0x85, 0x4f, 0x80, 0x4a, 0x00, 0x01, 0x90, 0x47, 0x69, 0x83, 0x5f,
0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x50, 0x81, 0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x5f,
0x85, 0x4f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x69, 0x83, 0x5f, 0x80, 0x47, 0x00, 0x01, 0x90,
0x47, 0x50, 0x81, 0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x5f, 0x85, 0x4f, 0x80, 0x47, 0x00,
0x01, 0x90, 0x47, 0x69, 0x83, 0x5f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x4a, 0x50, 0x81, 0x6f, 0x80,
0x4a, 0x00, 0x01, 0x90, 0x43, 0x5f, 0x83, 0x5f, 0x80, 0x43, 0x00, 0x01, 0x90, 0x45, 0x50, 0x81,
0x6f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x47, 0x69, 0x8b, 0x1f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x48,
0x69, 0x83, 0x5f, 0x80, 0x48, 0x00, 0x01, 0x90, 0x48, 0x50, 0x81, 0x6f, 0x80, 0x48, 0x00, 0x01,
0x90, 0x48, 0x5f, 0x83, 0x5f, 0x80, 0x48, 0x00, 0x01, 0x90, 0x48, 0x50, 0x81, 0x6f, 0x80, 0x48,
0x00, 0x01, 0x90, 0x48, 0x69, 0x83, 0x5f, 0x80, 0x48, 0x00, 0x01, 0x90, 0x47, 0x50, 0x81, 0x6f,
0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x5f, 0x83, 0x5f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x50,
0x81, 0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x69, 0x83, 0x5f, 0x80, 0x47, 0x00, 0x01, 0x90,
0x45, 0x50, 0x81, 0x6f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x45, 0x5f, 0x83, 0x5f, 0x80, 0x45, 0x00,
0x01, 0x90, 0x47, 0x50, 0x81, 0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x45, 0x69, 0x85, 0x4f, 0x80,
0x45, 0x00, 0x01, 0x90, 0x4a, 0x5f, 0x85, 0x4f, 0x80, 0x4a, 0x00, 0x01, 0x90, 0x47, 0x69, 0x83,
0x5f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x50, 0x81, 0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47,
0x5f, 0x85, 0x4f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x69, 0x83, 0x5f, 0x80, 0x47, 0x00, 0x01,
0x90, 0x47, 0x50, 0x81, 0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x5f, 0x85, 0x4f, 0x80, 0x47,
0x00, 0x01, 0x90, 0x47, 0x69, 0x83, 0x5f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x4a, 0x50, 0x81, 0x6f,
0x80, 0x4a, 0x00, 0x01, 0x90, 0x43, 0x5f, 0x83, 0x5f, 0x80, 0x43, 0x00, 0x01, 0x90, 0x45, 0x50,
0x81, 0x6f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x47, 0x69, 0x8b, 0x1f, 0x80, 0x47, 0x00, 0x01, 0x90,
0x48, 0x69, 0x83, 0x5f, 0x80, 0x48, 0x00, 0x01, 0x90, 0x48, 0x50, 0x81, 0x6f, 0x80, 0x48, 0x00,
0x01, 0x90, 0x48, 0x5f, 0x83, 0x5f, 0x80, 0x48, 0x00, 0x01, 0x90, 0x48, 0x50, 0x81, 0x6f, 0x80,
0x48, 0x00, 0x01, 0x90, 0x48, 0x69, 0x83, 0x5f, 0x80, 0x48, 0x00, 0x01, 0x90, 0x47, 0x50, 0x81,
0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47, 0x5f, 0x83, 0x5f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x47,
0x50, 0x81, 0x6f, 0x80, 0x47, 0x00, 0x01, 0x90, 0x4a, 0x69, 0x83, 0x5f, 0x80, 0x4a, 0x00, 0x01,
0x90, 0x4a, 0x50, 0x81, 0x6f, 0x80, 0x4a, 0x00, 0x01, 0x90, 0x48, 0x5f, 0x83, 0x5f, 0x80, 0x48,
0x00, 0x01, 0x90, 0x45, 0x50, 0x81, 0x6f, 0x80, 0x45, 0x00, 0x01, 0x90, 0x43, 0x69, 0x8b, 0x1f,
0x80, 0x43, 0x00, 0x1a, 0xff, 0x2f, 0x00, 0x4d, 0x54, 0x72, 0x6b, 0x00, 0x00, 0x00, 0x2f, 0x00,
0xff, 0x01, 0x25, 0x5a, 0x3a, 0x4a, 0x6f, 0x68, 0x6e, 0x20, 0x43, 0x68, 0x61, 0x6d, 0x62, 0x65,
0x72, 0x73, 0x20, 0x3c, 0x6a, 0x63, 0x3a, 0x74, 0x72, 0x69, 0x6c, 0x6c, 0x69, 0x61, 0x6e, 0x2e,
0x6d, 0x69, 0x74, 0x2e, 0x65, 0x64, 0x75, 0x3e, 0x82, 0xe8, 0x19, 0xff, 0x2f, 0x00,
#endif
};

#endif /* TUNE_H_ */
