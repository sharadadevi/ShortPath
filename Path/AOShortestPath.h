//
//  AOShortPath.h
//  Path
//
//  Created by Sharada Devi on 23.03.2017.
//  Copyright (c) 2017 Path. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AOPathConnection;

@interface AOPathPoint : NSObject
@property (assign, nonatomic) long tag;
@property (strong, nonatomic) NSMutableArray *connectionList;
- (id)initWithTag:(long)tag;
- (void)addConnection:(AOPathConnection*)connection;
- (AOPathConnection*)getConnectionToPointWithTag:(long)tag;
@end

@interface AOPathConnection : NSObject
@property (strong, nonatomic) AOPathPoint *point;
@property (assign, nonatomic) CGFloat weight;
@end

@interface AOShortestPath : NSObject

@property (strong, nonatomic) NSMutableArray *pointList;
- (AOPathPoint*)getPathPointWithTag:(long)tag;
- (NSArray*)getShortestPathFromPoint:(AOPathPoint*)fromPoint toPoint:(AOPathPoint*)toPoint;

@end
