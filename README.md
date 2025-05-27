2)a)Incluir un archivo .gitignore es útil porque:
-Evita subir archivos innecesarios: Como archivos temporales, compilados o de configuración que no son relevantes para el proyecto.
-Mejora la organización del repositorio: Mantiene el repositorio limpio, sin archivos que puedan generar ruido o confusión.
-Protege información sensible: Como claves de API, contraseñas o configuraciones locales que no deben compartirse.
-Reduce conflictos entre desarrolladores: Evita que cada persona suba sus propios archivos generados por su entorno de trabajo
b)Debe incluirse desde el inicio del proyecto, antes de hacer el primer commit, para asegurarse de que los archivos irrelevantes nunca sean subidos al repositorio.
c)# Archivos de compilación
*.o
*.out
*.exe
# Archivos de dependencias
node_modules/
vendor/
# Configuración de entorno
.env
# Archivos generados por editores
.vscode/
.idea/
*.log
# Archivos de respaldo
*.bak
*.swp
3)c) Agrega elementos .exe que no son necesario y no tienen funcionanlidad para eso agregamos gitignore con elementos de visual estudio code de C y Executable
