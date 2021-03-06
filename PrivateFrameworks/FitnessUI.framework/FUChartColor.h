/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUChartColor : NSObject {
    float _chartYValue;
    struct CGColor { } *_color;
    struct CGGradient { } *_gradient;
    double _threshold;
}

@property float chartYValue;
@property double threshold;

- (float)chartYValue;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithThreshold:(double)arg1 color:(id)arg2;
- (id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3;
- (void)setChartYValue:(float)arg1;
- (void)setThreshold:(double)arg1;
- (double)threshold;

@end
