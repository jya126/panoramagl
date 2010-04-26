/*
 * This file is part of the PanoramaGL library.
 *
 *  Author: Javier Baez <javbaezga@gmail.com>
 *
 *  $Id$
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; version 3 of
 * the License
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this software; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA, or see the FSF site: http://www.fsf.org.
 */

#import <OpenGLES/EAGL.h>
#import "glu.h"

#import "PLEnums.h"
#import "PLStructs.h"
#import "PLUtils.h"
#import "PLTexture.h"
#import "PLObject.h"

@interface PLSceneElement : PLObject 
{
	NSMutableArray * textures;
	BOOL isVisible, isValid;
}

@property(nonatomic, readonly, getter=getTextures) NSMutableArray * textures;
@property(nonatomic) BOOL isVisible;
@property(nonatomic, readonly) BOOL isValid;

- (id)initWithTexture:(PLTexture *)texture;

- (NSMutableArray *)getTextures;
- (void)addTexture:(PLTexture *)texture;
- (void)addTextureAndRelease:(PLTexture *)texture;
- (void)removeTexture:(PLTexture *)texture;
- (void)removeTextureAtIndex:(NSUInteger)index;
- (void)removeAllTextures;

- (BOOL)render;

@end
