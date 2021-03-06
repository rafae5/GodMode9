#pragma once

#include "common.h"

// see https://gist.github.com/SciresM/cdd2266efb80175d37eabbe86f9d8c52 for source
// thanks SciresM, Myria, Normmatt, TuxSH and hedgeberg for the signatures!

u8 sig_nand_firm_retail[256] = {
    0xB6, 0x72, 0x45, 0x31, 0xC4, 0x48, 0x65, 0x7A, 0x2A, 0x2E, 0xE3, 0x06, 0x45, 0x7E, 0x35, 0x0A,
    0x10, 0xD5, 0x44, 0xB4, 0x28, 0x59, 0xB0, 0xE5, 0xB0, 0xBE, 0xD2, 0x75, 0x34, 0xCC, 0xCC, 0x2A,
    0x4D, 0x47, 0xED, 0xEA, 0x60, 0xA7, 0xDD, 0x99, 0x93, 0x99, 0x50, 0xA6, 0x35, 0x7B, 0x1E, 0x35,
    0xDF, 0xC7, 0xFA, 0xC7, 0x73, 0xB7, 0xE1, 0x2E, 0x7C, 0x14, 0x81, 0x23, 0x4A, 0xF1, 0x41, 0xB3,
    0x1C, 0xF0, 0x8E, 0x9F, 0x62, 0x29, 0x3A, 0xA6, 0xBA, 0xAE, 0x24, 0x6C, 0x15, 0x09, 0x5F, 0x8B,
    0x78, 0x40, 0x2A, 0x68, 0x4D, 0x85, 0x2C, 0x68, 0x05, 0x49, 0xFA, 0x5B, 0x3F, 0x14, 0xD9, 0xE8,
    0x38, 0xA2, 0xFB, 0x9C, 0x09, 0xA1, 0x5A, 0xBB, 0x40, 0xDC, 0xA2, 0x5E, 0x40, 0xA3, 0xDD, 0xC1,
    0xF5, 0x8E, 0x79, 0xCE, 0xC9, 0x01, 0x97, 0x43, 0x63, 0xA9, 0x46, 0xE9, 0x9B, 0x43, 0x46, 0xE8,
    0xA3, 0x72, 0xB6, 0xCD, 0x55, 0xA7, 0x07, 0xE1, 0xEA, 0xB9, 0xBE, 0xC0, 0x20, 0x0B, 0x5B, 0xA0,
    0xB6, 0x61, 0x23, 0x6A, 0x87, 0x08, 0xD7, 0x04, 0x51, 0x7F, 0x43, 0xC6, 0xC3, 0x8E, 0xE9, 0x56,
    0x01, 0x11, 0xE1, 0x40, 0x5E, 0x5E, 0x8E, 0xD3, 0x56, 0xC4, 0x9C, 0x4F, 0xF6, 0x82, 0x3D, 0x12,
    0x19, 0xAF, 0xAE, 0xEB, 0x3D, 0xF3, 0xC3, 0x6B, 0x62, 0xBB, 0xA8, 0x8F, 0xC1, 0x5B, 0xA8, 0x64,
    0x8F, 0x93, 0x33, 0xFD, 0x9F, 0xC0, 0x92, 0xB8, 0x14, 0x6C, 0x3D, 0x90, 0x8F, 0x73, 0x15, 0x5D,
    0x48, 0xBE, 0x89, 0xD7, 0x26, 0x12, 0xE1, 0x8E, 0x4A, 0xA8, 0xEB, 0x9B, 0x7F, 0xD2, 0xA5, 0xF7,
    0x32, 0x8C, 0x4E, 0xCB, 0xFB, 0x00, 0x83, 0x83, 0x3C, 0xBD, 0x5C, 0x98, 0x3A, 0x25, 0xCE, 0xB8,
    0xB9, 0x41, 0xCC, 0x68, 0xEB, 0x01, 0x7C, 0xE8, 0x7F, 0x5D, 0x79, 0x3A, 0xCA, 0x09, 0xAC, 0xF7
};

u8 sig_nand_firm_dev[256] = {
    0x88, 0x69, 0x7C, 0xDC, 0xA9, 0xD1, 0xEA, 0x31, 0x82, 0x56, 0xFC, 0xD9, 0xCE, 0xD4, 0x29, 0x64,
    0xC1, 0xE9, 0x8A, 0xBC, 0x64, 0x86, 0xB2, 0xF1, 0x28, 0xEC, 0x02, 0xE7, 0x1C, 0x5A, 0xE3, 0x5D,
    0x63, 0xD3, 0xBF, 0x12, 0x46, 0x13, 0x40, 0x81, 0xAF, 0x68, 0x75, 0x47, 0x87, 0xFC, 0xB9, 0x22,
    0x57, 0x1D, 0x7F, 0x61, 0xA3, 0x0D, 0xE4, 0xFC, 0xFA, 0x82, 0x93, 0xA9, 0xDA, 0x51, 0x23, 0x96,
    0xF1, 0x31, 0x9A, 0x36, 0x49, 0x68, 0x46, 0x4C, 0xA9, 0x80, 0x6E, 0x0A, 0x52, 0x56, 0x74, 0x86,
    0x75, 0x4C, 0xDD, 0xD4, 0xC3, 0xA6, 0x2B, 0xDC, 0xE2, 0x55, 0xE0, 0xDE, 0xEC, 0x23, 0x01, 0x29,
    0xC1, 0xBA, 0xE1, 0xAE, 0x95, 0xD7, 0x86, 0x86, 0x56, 0x37, 0xC1, 0xE6, 0x5F, 0xAE, 0x83, 0xED,
    0xF8, 0xE7, 0xB0, 0x7D, 0x17, 0xC0, 0xAA, 0xDA, 0x8F, 0x05, 0x5B, 0x64, 0x0D, 0x45, 0xAB, 0x0B,
    0xAC, 0x76, 0xFF, 0x7B, 0x34, 0x39, 0xF5, 0xA4, 0xBF, 0xE8, 0xF7, 0xE0, 0xE1, 0x03, 0xBC, 0xE9,
    0x95, 0xFA, 0xD9, 0x13, 0xFB, 0x72, 0x9D, 0x3D, 0x03, 0x0B, 0x26, 0x44, 0xEC, 0x48, 0x39, 0x64,
    0x24, 0xE0, 0x56, 0x3A, 0x1B, 0x3E, 0x6A, 0x1F, 0x68, 0x0B, 0x39, 0xFC, 0x14, 0x61, 0x88, 0x6F,
    0xA7, 0xA6, 0x0B, 0x6B, 0x56, 0xC5, 0xA8, 0x46, 0x55, 0x4A, 0xE6, 0x48, 0xFC, 0x46, 0xE3, 0x0E,
    0x24, 0x67, 0x8F, 0xAF, 0x1D, 0xC3, 0xCE, 0xB1, 0x0C, 0x2A, 0x95, 0x0F, 0x4F, 0xFA, 0x20, 0x83,
    0x23, 0x4E, 0xD8, 0xDC, 0xC3, 0x58, 0x7A, 0x6D, 0x75, 0x1A, 0x7E, 0x9A, 0xFA, 0x06, 0x15, 0x69,
    0x55, 0x08, 0x4F, 0xF2, 0x72, 0x5B, 0x69, 0x8E, 0xB1, 0x74, 0x54, 0xD9, 0xB0, 0x2B, 0x6B, 0x76,
    0xBE, 0x47, 0xAB, 0xBE, 0x20, 0x62, 0x94, 0x36, 0x69, 0x87, 0xA4, 0xCA, 0xB4, 0x2C, 0xBD, 0x0B
};

u8 sig_nand_ncsd_retail[256] = {
    0x6C, 0xF5, 0x2F, 0x89, 0xF3, 0x78, 0x12, 0x0B, 0xFA, 0x4E, 0x10, 0x61, 0xD7, 0x36, 0x16, 0x34,
    0xD9, 0xA2, 0x54, 0xA4, 0xF5, 0x7A, 0xA5, 0xBD, 0x9F, 0x2C, 0x30, 0x93, 0x4F, 0x0E, 0x68, 0xCB,
    0xE6, 0x61, 0x1D, 0x90, 0xD7, 0x4C, 0xAA, 0xAC, 0xB6, 0xA9, 0x95, 0x56, 0x56, 0x47, 0x33, 0x3D,
    0xC1, 0x70, 0x92, 0xD3, 0x20, 0x13, 0x10, 0x89, 0xCC, 0xCD, 0x63, 0x31, 0xCB, 0x3A, 0x59, 0x5D,
    0x1B, 0xA2, 0x99, 0xA3, 0x2F, 0xF4, 0xD8, 0xE5, 0xDD, 0x1E, 0xB4, 0x6A, 0x2A, 0x57, 0x93, 0x5F,
    0x6F, 0xE6, 0x37, 0x32, 0x2D, 0x3B, 0xC4, 0xF6, 0x7C, 0xFE, 0xD6, 0xC2, 0x25, 0x4C, 0x08, 0x9C,
    0x62, 0xFA, 0x11, 0xD0, 0x82, 0x4A, 0x84, 0x4C, 0x79, 0xEE, 0x5A, 0x4F, 0x27, 0x3D, 0x46, 0xC2,
    0x3B, 0xBB, 0xF0, 0xA2, 0xAF, 0x6A, 0xCA, 0xDB, 0xE6, 0x46, 0xF4, 0x6B, 0x86, 0xD1, 0x28, 0x9C,
    0x7F, 0xF7, 0xE8, 0x16, 0xCF, 0xDA, 0x4B, 0xC3, 0x3D, 0xFF, 0x9D, 0x17, 0x5A, 0xC6, 0x9F, 0x72,
    0x40, 0x6C, 0x07, 0x1B, 0x51, 0xF4, 0x5A, 0x1A, 0xCB, 0x87, 0xF1, 0x68, 0xC1, 0x77, 0xCB, 0x9B,
    0xE6, 0xC3, 0x92, 0xF0, 0x34, 0x18, 0x49, 0xAE, 0x5D, 0x51, 0x0D, 0x26, 0xEE, 0xC1, 0x09, 0x7B,
    0xEB, 0xFB, 0x9D, 0x14, 0x4A, 0x16, 0x47, 0x30, 0x1B, 0xEA, 0xF9, 0x52, 0x0D, 0x22, 0xC5, 0x5A,
    0xF4, 0x6D, 0x49, 0x28, 0x4C, 0xC7, 0xF9, 0xFB, 0xBA, 0x37, 0x1A, 0x6D, 0x6E, 0x4C, 0x55, 0xF1,
    0xE5, 0x36, 0xD6, 0x23, 0x7F, 0xFF, 0x54, 0xB3, 0xE9, 0xC1, 0x1A, 0x20, 0xCF, 0xCC, 0xAC, 0x0C,
    0x6B, 0x06, 0xF6, 0x95, 0x76, 0x6A, 0xCE, 0xB1, 0x8B, 0xE3, 0x32, 0x99, 0xA9, 0x4C, 0xFC, 0xA7,
    0xE2, 0x58, 0x81, 0x86, 0x52, 0xF7, 0x52, 0x6B, 0x30, 0x6B, 0x52, 0xE0, 0xAE, 0xD0, 0x42, 0x18
};

u8 sig_nand_ncsd_dev[256] = {
    0x53, 0xCB, 0x0E, 0x4E, 0xB1, 0xA6, 0xFF, 0x84, 0x28, 0x4B, 0xE0, 0xE7, 0x38, 0x5A, 0xB4, 0xA6,
    0x86, 0xA8, 0xBB, 0xCB, 0xC1, 0x61, 0x02, 0x47, 0x92, 0x80, 0xE0, 0x58, 0x36, 0x55, 0xD2, 0x71,
    0x3F, 0xE5, 0x06, 0xFA, 0xEE, 0x74, 0xF8, 0xD1, 0x0F, 0x12, 0x20, 0x44, 0x1C, 0xC2, 0xFF, 0x5D,
    0x6D, 0xDE, 0x99, 0xBE, 0x79, 0xC1, 0x9B, 0x38, 0x6C, 0xAF, 0x68, 0xD5, 0xEB, 0x8C, 0xED, 0x1A,
    0xAB, 0x4D, 0x24, 0x3C, 0x5F, 0x39, 0x86, 0x80, 0xD3, 0x1C, 0xD2, 0xE3, 0xC9, 0xDD, 0x56, 0x70,
    0xF2, 0xA8, 0x8D, 0x56, 0x3B, 0x8F, 0x65, 0xF5, 0xB2, 0x34, 0xFD, 0x2E, 0xBB, 0x3B, 0xE4, 0x4A,
    0x3B, 0x6C, 0x30, 0x27, 0x22, 0xA2, 0xAD, 0xFB, 0x56, 0xAE, 0x3E, 0x1F, 0x64, 0x17, 0xBD, 0xEC,
    0x1E, 0x5A, 0x86, 0xAA, 0xBB, 0xAF, 0xBE, 0x94, 0x19, 0xAC, 0xA8, 0xFD, 0xCD, 0x45, 0xE2, 0xCD,
    0xF1, 0xEB, 0x69, 0x5F, 0x6E, 0xA8, 0x78, 0x16, 0x12, 0x2D, 0x7B, 0xE9, 0x8E, 0xEF, 0x92, 0xC0,
    0x81, 0x4B, 0x16, 0xB2, 0x15, 0xB3, 0x1D, 0x8C, 0x81, 0x3B, 0xB3, 0x55, 0xCE, 0xA8, 0x13, 0x8F,
    0xB3, 0xBF, 0x23, 0x74, 0x24, 0x68, 0x42, 0xCD, 0x91, 0xE1, 0xF9, 0xAA, 0xFF, 0x76, 0x87, 0x86,
    0x17, 0xCE, 0x02, 0x06, 0x47, 0x77, 0xAE, 0xA0, 0x87, 0x6A, 0x2C, 0x24, 0x5C, 0x78, 0x43, 0x41,
    0xCD, 0xEE, 0x90, 0xD6, 0x91, 0x74, 0x59, 0x08, 0xA6, 0xFF, 0x9C, 0xE7, 0x81, 0x16, 0x67, 0x96,
    0xF9, 0xF1, 0x23, 0x8F, 0x88, 0x4C, 0x84, 0xD6, 0xF1, 0xEE, 0xBB, 0x2E, 0x40, 0xB4, 0xBC, 0xA0,
    0x0A, 0x7B, 0x1E, 0x91, 0x3E, 0x09, 0x80, 0xD2, 0x9F, 0xF6, 0x06, 0x1D, 0x8A, 0xA9, 0x44, 0xC6,
    0x63, 0xF2, 0x63, 0x81, 0x27, 0xF7, 0xCC, 0xAB, 0x6F, 0xC7, 0x15, 0x38, 0x47, 0x1A, 0x51, 0x38
};
