/*******************************************************************************
  * parismiPlugins v0.1
  * Copyright (c) 2009-2015 Michael Chiang.
  * All rights reserved. This program and the accompanying materials
  * are made available under a dual license: the two-clause BSD license or
  * the GNU Public License v2.
  ******************************************************************************/

#include "CallbackFunctions.h"
#include "ImageIO.h"
#include "Image3D.h"
#include "definitions.h"
#include <boost/math/special_functions/round.hpp>
#include "Image3D_util.h"
#include "util.h"
#include <boost/lexical_cast.hpp>

void gaussianBlur(ImageIO* inputImage, ImageIO* outputImage,
		CallbackFunctions *cb);
