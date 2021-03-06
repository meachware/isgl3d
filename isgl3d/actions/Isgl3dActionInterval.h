/*
 * iSGL3D: http://isgl3d.com
 *
 * Copyright (c) 2010-2012 Stuart Caunt
 * 
 * This class is inspired from equivalent functionality provided by cocos2d :
 * cocos2d for iPhone: http://www.cocos2d-iphone.org
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 * 
 *
 */
 
 #import "Isgl3dActionFixedDuration.h"

/**
 * The Isgl3dActionInterval is the base class for all actions that have a duration
 * of greater than 0 seconds.
 */
@interface Isgl3dActionInterval : Isgl3dActionFixedDuration <NSCopying> {
	float _duration;
	float _elapsedTime;
	BOOL _isFirstTick;
}

@property (nonatomic, readonly) float duration;
@property (nonatomic, readonly) float elapsedTime;

/**
 * Allocates and initialises (autorelease) an Isgl3dActionInterval with a duration.
 * @param duration The duration of the action
 */
+ (id)actionWithDuration:(float)duration;

/**
 * Initialises the an Isgl3dActionInterval with a duration.
 * @param duration The duration of the action
 */
- (id)initWithDuration:(float)duration;


@end
