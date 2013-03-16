//
//  AGTAlumno.h
//  CursoGit
//
//  Created by Fernando Rodríguez Romero on 3/16/13.
//  Copyright (c) 2013 Agbo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AGTAlumno : NSObject

@property (nonatomic, copy) NSString *nombre;
@property (nonatomic) BOOL registrado;
@property (nonatomic, copy) NSString *apellidos;
@property (nonatomic, copy) NSString *telefono;
@property (nonatomic, copy) NSString *direccion;

@end
