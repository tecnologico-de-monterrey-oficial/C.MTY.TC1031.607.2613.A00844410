1. ¿Qué ventaja concreta notaste al usar templates en tu clase Lista, comparado con haberla hecho solo para un tipo de dato (por ejemplo, solo enteros)? Da un ejemplo de tu propio código.

R/la principal ventaja que note al usar templates fue que la clase lista ya no esta limitada a un solo tipo de dato. por ejemplo, en mi codigo puedo usar List<int> para numeros enteros y tambien List<double> para numeros decimales sin tener que crear otra clase.


2. ¿Qué parte de la actividad —ya sea el uso de templates o el reto de insertAt/removeAt— te costó más trabajo entender o depurar? ¿Qué hiciste para resolverlo?

R/lo que mas me costo fue la parte de insertAt y removeAt, porque al principio me costaba entender que posicion era cual y como se tenian que recorrer los elementos cuando agregaba o eliminaba uno. para resolverlo, fui viendo la lista por posiciones, por ejemplo [0], [1], [2], y entendiendo primero que elemento estaba en cada posicion antes de hacer el movimiento.

3. Si tuvieras que explicarle a un compañero qué es un template en C++ usando tus propias palabras, sin tecnicismos, ¿qué le dirías?

R/yo explicaria un template comparandolo con las listas de python. en python puedes tener una lista y decidir que tipo de datos quieres guardar sin tener que crear una clase diferente. en c++, el template permite que mi clase List funcione con diferentes tipos, por ejemplo List<int> o List<double>. la diferencia es que en c++ cada lista queda definida para un tipo especifico, mientras que python permite mezclar diferentes tipos dentro de la misma lista.