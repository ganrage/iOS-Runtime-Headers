/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface ML3OrderingTerm : NSObject <NSCoding, NSCopying> {
    NSString *_collation;
    int _direction;
    NSString *_property;
}

@property(readonly) NSString * collation;
@property(readonly) int direction;
@property(readonly) NSString * property;

+ (id)orderingTermWithProperty:(id)arg1;
+ (id)orderingTermWithProperty:(id)arg1 direction:(int)arg2;
+ (id)reversedTerms:(id)arg1;

- (void).cxx_destruct;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)collation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)direction;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1;
- (id)initWithProperty:(id)arg1 direction:(int)arg2;
- (id)initWithProperty:(id)arg1 direction:(int)arg2 collation:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)property;

@end
