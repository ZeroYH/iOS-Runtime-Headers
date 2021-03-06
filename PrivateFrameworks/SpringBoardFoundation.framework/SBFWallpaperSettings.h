/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperSettings : _UISettings {
    long long  _blurReplacementMode;
    bool  _replaceBlurs;
}

@property (nonatomic) long long blurReplacementMode;
@property (nonatomic) bool replaceBlurs;

+ (id)settingsControllerModule;

- (long long)blurReplacementMode;
- (bool)replaceBlurs;
- (void)setBlurReplacementMode:(long long)arg1;
- (void)setDefaultValues;
- (void)setReplaceBlurs:(bool)arg1;

@end
