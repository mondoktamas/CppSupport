package com.pettersonapps.cplussupport;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        initWebRTC();
    }

    public void onWebRTCInitialized(final String message) {
        Log.d("CalledFromC++", message);
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */

    public native void initWebRTC();

    public native void signalingMessageReceived(final String message);

    public native void initiateCall(final String accountId,
                      final String iceParameters,
                      int maxTalkTime);

    public native void acceptCall(final String accountId, int resultMaxTalkTime);

    public native void terminateCall(final String accountId, final String reason);
}
