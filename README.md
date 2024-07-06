# DrivingAssistantSystem

:wave: ¡Hola, bienvenidos!
En este proyecto, actualmente en progreso :construction:, se estudiará de forma extendida el estado del  arte en simuladores realistas de conducción autónoma, se seleccionarán modelos de aprendizaje automático (aprendizaje profundo) que se ajusten a las necesidades de las imágenes que se van a procesar, y se estudiará (e implementará) el proceso de comunicación en tiempo real del simulador con MATLAB. De forma más concreta, se abordarán los siguientes objetivos específicos:

+ Adquirir y sincronizar datos de sensores del simulador. Crear un conjunto de imágenes anotadas para el entrenamiento y validación de los modelos.
+ Seleccionar, entrenar y validar modelos de aprendizaje automático para clasificar las imágenes registradas por la cámara del vehículo y reconocer señales de tráfico y límites en la calzada.  Se explorará el uso de redes neuronales convolucionales (CNN) para la detección de carriles y señales de tráfico (STOP, Límites de Velocidad en carril y obligatoriedad de dirección).
+ Integrar las salidas de estos modelos para su procesamiento en el sistema de asistencia central.
+ Desarrollar una interfaz gráfica para la visualización de advertencias y datos procesados.
