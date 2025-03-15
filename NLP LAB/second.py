# -*- coding: utf-8 -*-
"""second.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1G1B372PRfNRYoG_T1FbmWrDVCqx-N_u2
"""

import nltk
from nltk.corpus import wordnet
nltk.download('omw-1.4')
syns = wordnet.synsets("hello")
print(syns[0].name())
print(syns[0].lemmas()[0].name())
print(syns[0].definition())
print(syns[0].examples())

import nltk
from nltk.corpus import wordnet
synonyms = []
antonyms = []
  
for syn in wordnet.synsets("good"):
    for l in syn.lemmas():
        synonyms.append(l.name())
        if l.antonyms():
            antonyms.append(l.antonyms()[0].name())
  
print(set(synonyms))
print(set(antonyms))