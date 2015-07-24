//
//  LGInstaller.h
//  AutoPkgr
//
//  Created by Eldon Ahrold on 9/9/14.
//  Copyright 2014-2015 The Linde Group, Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "LGProgressDelegate.h"

@interface LGInstaller : NSObject

@property (weak) id<LGProgressDelegate> progressDelegate;
@property (copy, nonatomic) NSString *downloadURL;

#pragma mark - Installer Methods
- (void)runInstallerFor:(NSString *)installerName
              githubAPI:(NSString *)githubAPI
                  reply:(void (^)(NSError *error))reply;


- (void)runInstaller:(NSString *)installerName
                  reply:(void (^)(NSError *error))reply;


@end