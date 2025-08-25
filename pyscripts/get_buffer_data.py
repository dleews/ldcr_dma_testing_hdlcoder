import time
from adi import ad9361 
sdr = ad9361('ip:127.0.0.1') 

sdr._ctx.set_timeout(10000000)  

sdr.sample_rate=int(30.72e6) 

sdr.rx_lo = int(1413.5e6) 

sdr.rx_rf_bandwidth=int(20e6) 

sdr.rx_enabled_channels=[0,1] 

sdr.rx_buffer_size = 32;
time.sleep(1)
x = 0;
while x < 100:
	time.sleep(1);
	print(sdr.rx());
