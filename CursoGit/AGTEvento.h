//
//  AGTEvento.h
//  CursoGit
//
//  Created by Fernando Rodríguez Romero on 3/16/13.
//  Copyright (c) 2013 Agbo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AGTEvento : NSObject
@property (nonatomic, strong) NSDate *fecha;



-(NSDictionary *) eventos;
@end
