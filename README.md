Building a Pulse Oximeter
=========================

## Sumission for [UCSB Hackathon 2015][SBHacks 2015]

Winner of [Mindbody API Challenge][Mindbody]

![Demo Pulse Oximeter][cover]

## Team Members

- [Sang Han](mailto:jjangsangy@gmail.com)
- [Joshua Wheeler](mailto:sirlanceoflompoc@gmail.com)
- [Robin Morales](mailto:robismor@gmail.com)
- [David Anderson](mailto:davidandersonjonie4@gmail.com)


Introduction
------------

[Pulse oximetry] is a non-invasive medical diagnostic technique used to measure a persons oxygen saturation.

In medicine, oxygen saturation (SaO2), measures the percentage of hemoglobin
binding sites in the bloodstream occupied by oxygen.
A puse oximeter relies on the light absorption characteristics of oxygenated/deoxygenated hemoglobin based on an oxygen-hemoglobin dissociation curve represented by the following formula.

![O2 Saturation][heme]

Deoxygenated (or reduced) hemoglobin absorbs more red light and allows more infrared light to pass through.
Red light is in the 600-750 nm wavelength light band. Infrared light is in the 850-1000 nm wavelength light band.

![LED Frequency Diagram][LEDChart]


Photodiode Characteristics
---------------

![Photodiode][Photodiode]

-   Absoption: 627-946mm
-   Issues: 628nm

Medical significance
--------------------

Effects of Oxygen Saturation

| SaO2          | Effect                              |
|---------------|-------------------------------------|
| 85% and above | No evidence of impairment           |
| 65% and less  | Impaired mental function on average |
| 55% and less  | Loss of consciousness on average    |


[cover]:          images/cover.jpg
[Pulse oximetry]: http://en.wikipedia.org/wiki/Pulse_oximetry
[heme]:           http://upload.wikimedia.org/math/2/3/b/23b71ed0aaf0c57ecfc3c1dddf7ff5f1.png
[LEDChart]:       http://www.oximetry.org/IMAGES/cpo.gif
[Photodiode]:     http://www.learningaboutelectronics.com/images/photodiodesymbol.png
[SBHacks 2015]:   http://ucsbhacks.com
[Mindbody]:       http://www.ucsbhacks.com/prizes#mindbody
