A simple benchmark on how well the [Hilbert Curve Sort](https://github.com/CarbonicSoda/hilbert-curve-sort) performs on the TSPLIB dataset in both C++ and JS.
Particularly, the famous [pla85900.tsp](pla85900.tsp) set containing 85900 nodes.

The result is quite fascinating to me.
HilbertCurveSort2D (h2CurveSort), an algorithm that is not designed for TSP problems,
achieved a distance of 188465250 (CEIL_2D), only a rough x1.32 of the Mathematically optimal distance 142382641 (CEIL_2D).
That might seem quite bad, but many dedicated approximation algorithms do no better, yet this algorithm is more efficient.

A slight flaw of using the Hilbert Curve Sort to approximate TSP solutions, is that TSP asks for a _cycle_, not a simple tour.
Hilbert Curve Sort will not minimize the distance between the first and the last node, adding an overhead to the resultant distance,
however this is usually minor.

#### Tour Visualization

_Optimal Tour_

![Optimal Tour](assets/pla85900_optimal.png)

_Hilbert Curve Tour_

![Hilbert Curve Tour](assets/pla85900_hilbert_curve.png)

> Notice an additional horizontal line near the bottom of the tour connecting the bottom-left and the bottom-right. This is an example of the flaw I mentioned above.
