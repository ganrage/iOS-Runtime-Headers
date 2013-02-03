/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@class NSMutableArray;

@interface BluetoothAudioJack : NSObject {
    NSMutableArray *_devices;
    struct BTAudioJackImpl { } *_jack;
    BOOL _monitoring;
    NSMutableArray *_outOfCallDevices;
}

- (void)_loadDevices;
- (void)addDevice:(struct BTDeviceImpl { }*)arg1;
- (BOOL)available:(id)arg1;
- (id)availableDevices;
- (id)availableDevicesForOutOfCallRouting;
- (void)connect:(id)arg1;
- (BOOL)connected;
- (void)dealloc;
- (void)disconnect;
- (id)initWithAudioJack:(struct BTAudioJackImpl { }*)arg1;
- (struct BTAudioJackImpl { }*)jack;
- (void)removeDevice:(struct BTDeviceImpl { }*)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end