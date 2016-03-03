//
//  KCSPendingOperation.h
//  Kinvey
//
//  Created by Victor Barros on 2016-01-20.
//  Copyright © 2016 Kinvey. All rights reserved.
//

@import Foundation;

@protocol KCSPendingOperation

-(NSURLRequest* _Nonnull)buildRequest;
-(NSString* _Nullable)objectId;

@end
