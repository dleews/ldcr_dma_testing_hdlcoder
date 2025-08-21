%% Initialize parameters

centerFreq = 600e3;
s = zeros(8,8);
% SSQS
s(1:4,5:8) = [1 1 -1j -1j;-1j -1j 1 1;1 -1 1 -1; 1 -1 -1 1];

fftsize = 64;
ntaps = 12;
vsize = 1;

pfb = dsp.Channelizer('NumFrequencyBands',fftsize,'NumTapsPerBand',ntaps);

coe = pfb.coeffs;
coe = coe.Numerator;

Fs = 30.72e6;
Ts = 1/Fs;
N = 14;

numSamples = 12;

Fc = Fs / numSamples;
Tc = 1/Fc;