#import <Flutter/Flutter.h>

@interface FlutterSequencerPlugin : NSObject<FlutterPlugin>
@end


void setup_engine(int64_t sampleRateCallbackPort);
void destroy_engine(void);
void add_track_sfz(char *sfzPath, char *tuningPath, int64_t callbackPort);
void add_track_sfz_string(char *sampleRoot, char *sfzString, int64_t callbackPort);
void add_track_sf2(char *path, bool isAsset, int presetIndex, int64_t callbackPort);
void remove_track(int trackIndex);
void reset_track(int trackIndex);
UInt32 get_position(void);
Float32 get_track_volume(int trackIndex);
UInt64 get_last_render_time_us(void);
UInt32 get_buffer_available_count(int trackIndex);
void handle_events_now(int trackIndex, uint8_t* eventData, int32_t eventsCount);
UInt32 schedule_events(int trackIndex, uint8_t* eventData, int32_t eventsCount);
void clear_events(int trackIndex, int fromFrame);
void engine_play(void);
void engine_pause(void);