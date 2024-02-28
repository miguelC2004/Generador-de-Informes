# Programa de Generación de Informes
==================================
Este programa permite al usuario generar informes en diferentes formatos (PDF, Excel, HTML) utilizando el patrón Factory Method. El usuario puede elegir el formato del informe y el programa generará el informe correspondiente en el formato seleccionado.

Uso
---
El programa se ejecuta desde la línea de comandos. Al iniciarse, solicita al usuario que elija el formato del informe que desea generar:

1. PDF
2. Excel
3. HTML

El usuario debe ingresar el número correspondiente al formato deseado y luego presionar Enter. El programa creará un generador de informes del formato seleccionado y generará el informe utilizando dicho generador.

Estructura del Código
---------------------
El código está estructurado en varios archivos:

- `ReportGenerator.h`: Define la clase base `ReportGenerator` que contiene los métodos para generar un informe.
- `PdfReportGenerator.h`, `ExcelReportGenerator.h`, `HtmlReportGenerator.h`: Definen las clases concretas `PdfReportGenerator`, `ExcelReportGenerator` y `HtmlReportGenerator`, que implementan los métodos de la clase base para generar informes en formatos PDF, Excel y HTML, respectivamente.
- `ReportGeneratorFactory.h`: Define la clase `ReportGeneratorFactory`, que contiene el método estático `createReportGenerator` para crear instancias de generadores de informes según el formato especificado.
- `main.cpp`: Contiene la función `main` donde se realiza la interacción con el usuario y se utiliza el patrón Factory Method para crear y utilizar los generadores de informes.

Compilación y Ejecución
------------------------
Para compilar el programa, se puede utilizar un compilador de C++ compatible con C++11 o superior. Por ejemplo, para compilar con g++, se puede usar el siguiente comando:
```
g++ -std=c++11 main.cpp -o report_generator
```


Para ejecutar el programa, simplemente se debe ejecutar el archivo generado (`report_generator` en este caso) y seguir las instrucciones en pantalla para elegir el formato del informe a generar.

Mejorar
-------------------------------
- Añadir más formatos de informe, como CSV, pbix, JSON, etc.
- Permitir al usuario personalizar el contenido del informe, como agregar datos específicos.
- Implementar una interfaz gráfica de usuario (GUI) para una mejor experiencia de usuario.


