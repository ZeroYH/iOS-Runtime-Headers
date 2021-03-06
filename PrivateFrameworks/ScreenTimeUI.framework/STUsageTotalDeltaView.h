/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageTotalDeltaView : UIView {
    UIImageView * _imageView;
    bool  _isVibrancyEnabled;
    UILabel * _label;
    NSLayoutYAxisAnchor * _labelLastBaselineAnchor;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) bool isVibrancyEnabled;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly, copy) NSLayoutYAxisAnchor *labelLastBaselineAnchor;

- (void).cxx_destruct;
- (id)imageView;
- (id)init;
- (id)initWithVibrancyEnabled:(bool)arg1;
- (bool)isVibrancyEnabled;
- (id)label;
- (id)labelLastBaselineAnchor;
- (id)lastBaselineAnchor;
- (void)setDeltaFromAverage:(double)arg1 reportType:(unsigned long long)arg2;

@end
