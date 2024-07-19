# GUÍA PARA CONSTRUIR AIRSIM EN WINDOWS

## **PUNTO DE PARTIDA**

### ¿QUÉ ES AIRSIM?

AirSim es un simulador de vehículos desarrollado por Microsoft AI & Research. Está diseñado para ser una plataforma de código abierto que permita la investigación, desarrollo y prueba de algoritmos de control y percepción autónoma. AirSim soporta vehículos aéreos (como drones) y terrestres, proporcionando un entorno realista y detallado para simular sus comportamientos en diversas condiciones.

> Aquí se incluye el link a su repositorio: <https://microsoft.github.io/AirSim/build_windows/>

### UTILIDADES DE AIRSIM

AirSim es una herramienta muy poderosa para varias áreas de investigación y desarrollo. Se destaca:

+ **Desarrollo de Drones y Vehículos Autónomos:** Permite probar y refinar algoritmos de control y navegación en un entorno seguro antes de desplegarlos en el mundo real.

+ **Investigación en IA y Machine Learning:** Proporciona datos sintéticos que pueden ser utilizados para entrenar modelos de inteligencia artificial, incluyendo redes neuronales para tareas como la visión por computadora y el procesamiento de imágenes.

+ **Simulación de Entornos Complejos:** Permite simular diferentes entornos y condiciones meteorológicas, lo cual es crucial para el desarrollo de sistemas autónomos robustos.

+ **Educación y Formación:** Es una herramienta excelente para estudiantes e investigadores que buscan aprender sobre robótica, control de vehículos, y simulación de entornos.

+ **Pruebas de Seguridad:** Permite realizar pruebas de seguridad y fiabilidad en entornos controlados, reduciendo el riesgo de accidentes en pruebas del mundo real.

AirSim se integra con Unreal Engine, un motor de juegos de alta fidelidad, lo que proporciona gráficos avanzados y físicas realistas, haciendo de esta combinación una plataforma muy potente para simulación y desarrollo.

## AIRSIM EN DrivingAssistantSystem

Se añade en el repositorio principal un submodulo de [AirSim](https://github.com/microsoft/AirSim) de Microsoft para iniciar las integraciones en el Simulador.
