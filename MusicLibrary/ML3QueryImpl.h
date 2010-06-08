/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLQueryImpl.h"

@class ML3Query;

__attribute__((visibility("hidden")))
@interface ML3QueryImpl : MLQueryImpl {
@private
	ML3Query* _query3;
	BOOL _treatCollectionAsVirtualTrack;
}
-(void)dealloc;
-(id)description;
-(BOOL)directQueryDisabledForBlankNameFiltering;
-(BOOL)excludesEntitiesWithBlankNames;
-(id)directCollectionQueryWithAggregateQuery:(id)aggregateQuery;
-(void)evaluate;
-(void)loadAllEntities;
-(BOOL)countOfEntitiesIsNonZero;
-(unsigned)countOfEntitiesNoLoad;
-(unsigned)countOfEntities;
-(id)representativeTrackOfEntityAtIndex:(unsigned)index;
-(id)_entityForML3Entity:(id)ml3Entity;
-(id)entityAtIndex:(unsigned)index;
-(unsigned)indexOfEntity:(id)entity;
-(unsigned)indexOfFirstEntityMatchingPredicate:(id)firstEntityMatchingPredicate;
-(unsigned)indexOfFirstEntityMatchingPredicates:(id)firstEntityMatchingPredicates;
-(BOOL)entityMatchesPredicate:(id)predicate entityIndex:(unsigned)index;
-(BOOL)entityMatchesPredicates:(id)predicates entityIndex:(unsigned)index;
-(int)entityTypeOfEntityAtIndex:(unsigned)index;
-(void)getValues:(id*)values forProperties:(unsigned*)properties count:(unsigned)count ofEntityAtIndex:(unsigned)index;
-(id)valueForProperty:(unsigned long)property ofEntityAtIndex:(unsigned)index;
-(id)stringValueForProperty:(unsigned long)property ofEntityAtIndex:(unsigned)index;
-(id)sectionTitleForStringProperty:(unsigned long)stringProperty ofEntityAtIndex:(unsigned)index;
-(unsigned long long)unsignedValueForProperty:(unsigned long)property ofEntityAtIndex:(unsigned)index;
-(double)timeValueForProperty:(unsigned long)property ofEntityAtIndex:(unsigned)index;
-(void)visitGroupMembersOfEntityAtIndex:(unsigned)index visitor:(/*function-pointer*/ void*)visitor context:(void*)context;
-(unsigned)countOfEntitiesGroupedByEntityAtIndex:(unsigned)index;
-(id)representativeTrackForEntityAtIndex:(unsigned)index;
-(id)containingPlaylist;
-(unsigned long)containedMediaTypesForEntityAtIndex:(unsigned)index;
-(id)sectionDataForStringProperty:(unsigned long)stringProperty;
-(void)evaluateQuery:(id)query withEntities:(id)entities;
-(id)representativeTracksForAlbumsGetTrackCount:(unsigned*)albumsGetTrackCount;
@end
