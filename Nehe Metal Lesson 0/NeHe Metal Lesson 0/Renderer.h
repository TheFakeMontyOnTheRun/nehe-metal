//
//  Renderer.h
//  NeHe Metal Lesson 0
//
//  Created by Daniel Monteiro on 08/07/2019.
//  Copyright © 2019 Daniel Monteiro. All rights reserved.
//

#import <MetalKit/MetalKit.h>

// Our platform independent renderer class.   Implements the MTKViewDelegate protocol which
//   allows it to accept per-frame update and drawable resize callbacks.
@interface Renderer : NSObject <MTKViewDelegate>

-(nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)view;

@end

