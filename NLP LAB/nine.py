# -*- coding: utf-8 -*-
"""nine.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1QB5Vh38KL895Ldh1E60aL2I8PIKREHE0
"""

!pip3 install SpeechRecognition pydub

import speech_recognition as sr
filename = "audio.wav"
# initialize the recognizer
r = sr.Recognizer()
# open the file
with sr.AudioFile(filename) as source:
    # listen for the data (load audio to memory)
    audio_data = r.record(source)
    # recognize (convert from speech to text)
    text = r.recognize_google(audio_data)
    print(text)