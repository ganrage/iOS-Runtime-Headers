/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSFileProviderExtension;

@interface _NSFileProviderExtensionContext : NSExtensionContext <_NSFileProviderVendor> {
    NSFileProviderExtension *_principalInstance;
}

@property NSFileProviderExtension * principalInstance;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)_URLForItemIdentifier:(id)arg1 completion:(id)arg2;
- (void)_identifierForItemAtURL:(id)arg1 completion:(id)arg2;
- (void)_itemChangedAtURL:(id)arg1 completion:(id)arg2;
- (void)_performInitialSetupWithCompletion:(id)arg1;
- (void)_providePlaceholderAtURL:(id)arg1 completion:(id)arg2;
- (void)_startProvidingItemAtURL:(id)arg1 completion:(id)arg2;
- (void)_stopProvidingItemAtURL:(id)arg1 completion:(id)arg2;
- (id)principalInstance;
- (void)setPrincipalInstance:(id)arg1;

@end
