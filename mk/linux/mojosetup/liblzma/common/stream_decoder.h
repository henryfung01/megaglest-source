///////////////////////////////////////////////////////////////////////////////
//
/// \file       stream_decoder.h
/// \brief      Decodes .xz Streams
//
//
// Copyright 2012 Lasse Collin
// Public Domain
//

//  Author:     Lasse Collin
//
//  This file has been put into the public domain.
//  You can do whatever you want with this file.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef LZMA_STREAM_DECODER_H
#define LZMA_STREAM_DECODER_H

#include "common.h"

extern lzma_ret lzma_stream_decoder_init(lzma_next_coder *next,
		lzma_allocator *allocator, uint64_t memlimit, uint32_t flags);

#endif
