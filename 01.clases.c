Curso Profesional de Git y GitHub

Introducción a Git

1-) Clase [1-43] - ¿Por qué usar un sistema de control de versiones como Git?

        Un sistema de control de versiones como Git nos ayuda a guardar el historial de cambios y crecimiento de los archivos de nuestro proyecto.

            El comando para iniciar nuestro repositorio, o sea, indicarle a Git que queremos usar su sistema de control de versiones en nuestro proyecto, es git init.
            El comando para que nuestro repositorio sepa de la existencia de un archivo o sus últimos cambios es git add. Este comando no almacena las actualizaciones de forma definitiva, únicamente las guarda en algo que conocemos como “Staging Area” (área de montaje o ensayo).
            El comando para almacenar definitivamente todos los cambios que por ahora viven en el staging area es git commit. También podemos guardar un mensaje para recordar muy bien qué cambios hicimos en este commit con el argumento -m "Mensaje del commit".
            Por último, si queremos mandar nuestros commits a un servidor remoto, un lugar donde todos podamos conectar nuestros proyectos, usamos el comando git push.

        Comandos básicos de git:

            git init: inicializa un repositorio de GIT en la carpeta donde se ejecute el comando.
            git add: añade los archivos especificados al área de preparación (staging).
            git commit -m “commit description”: confirma los archivos que se encuentran en el área de preparación y los agrega al repositorio.
            git commit -am “commit description”: añade al staging area y hace un commit mediante un solo comando. (No funciona con archivos nuevos)
            git status: ofrece una descripción del estado de los archivos (untracked, ready to commit, nothing to commit).
            git rm (. -r, filename) (–cached): remueve los archivos del index.
            git config --global user.email tu@email.com: configura un email.
            git config --global user.name <Nombre como se verá en los commits>: configura un nombre.
            git config --list: lista las configuraciones.

        Analizar cambios en los archivos de un proyecto Git:

            git log: lista de manera descendente los commits realizados.
            git log --stat: además de listar los commits, muestra la cantidad de bytes añadidos y eliminados en cada uno de los archivos modificados.
            git log --all --graph --decorate --oneline: muestra de manera comprimida toda la historia del repositorio de manera gráfica y embellecida.
            git show filename: permite ver la historia de los cambios en un archivo.
            git diff <commit1> <commit2>: compara diferencias entre en cambios confirmados.

        Volver en el tiempo con branches y checkout:

            git reset <commit> --soft/hard: regresa al commit especificado, eliminando todos los cambios que se hicieron después de ese commit.
            git checkout <commit/branch> <filename>: permite regresar al estado en el cual se realizó un commit o branch especificado, pero no elimina lo que está en el staging area.
            git checkout – <filePath>: deshacer cambios en un archivo en estado modified (que ni fue agregado a staging)

        git rm y git reset:

            git rm:

            Este comando nos ayuda a eliminar archivos de Git sin eliminar su historial del sistema de versiones. Esto quiere decir que si necesitamos recuperar el archivo solo debemos “viajar en el tiempo” y recuperar el último commit antes de borrar el archivo en cuestión.
            git rm no puede usarse por sí solo, así nomás. Se debe utilizar uno de los flags para indicar a Git cómo eliminar los archivos que ya no se necesitan en la última versión del proyecto:

                git rm --cached <archivo/s>: elimina los archivos del área de Staging y del próximo commit, pero los mantiene en nuestro disco duro.
                git rm --force <archivo/s>: elimina los archivos de Git y del disco duro. Git siempre guarda todo, por lo que podemos acceder al registro de la existencia de los archivos, de modo que podremos recuperarlos si es necesario (pero debemos aplicar comandos más avanzados).

        git reset:
        
            Con git reset volvemos al pasado sin la posibilidad de volver al futuro. Borramos la historia y la debemos sobreescribir.

                git reset --soft: Vuelve el branch al estado del commit especificado, manteniendo los archivos en el directorio de trabajo y lo que haya en staging considerando todo como nuevos cambios. Así podemos aplicar las últimas actualizaciones a un nuevo commit.
                git reset --hard: Borra absolutamente todo. Toda la información de los commits y del área de staging se borra del historial.
                git reset HEAD: No borra los archivos ni sus modificaciones, solo los saca del área de staging, de forma que los últimos cambios de estos archivos no se envíen al último commit. Si se cambia de opinión se los puede incluir nuevamente con git add.




2-) Clase [2-43] - ¿Qué es Git?

    Git es un sistema de control de versiones distribuido, diseñado por Linus Torvalds.
    Está pensando en la eficiencia y la confiabilidad del mantenimiento de versiones de aplicaciones cuando
    estas tienen un gran número de archivos de código fuente.

        Git está optimizado para guardar cambios de forma incremental.

        Permite contar con un historial, regresar a una versión anterior y agregar funcionalidades.

        Lleva un registro de los cambios que otras personas realicen en los archivos.

    Características de Git:

        Git almacena la información como un conjunto de archivos.

        No existen cambios, corrupción en archivos o cualquier alteración sin que Git lo sepa.

        Casi todo en Git es local. Es difícil que se necesiten recursos o información externos, basta con los recursos locales con los que cuenta.

        Git cuenta con 3 estados en los que es posible localizar archivos: Staged, Modified y Committed.

    Características de Github:

        GitHub permite alojar proyectos en repositorios de forma gratuita y pública, pero tiene una forma de pago para privados.

        Puedes compartir fácilmente tus proyectos.

        Permite colaborar para mejorar los proyectos de otros y a otros mejorar o aportar a los tuyos.

        Ayuda a reducir significativamente los errores humanos, a tener un mejor mantenimiento de distintos entornos y a detectar fallos de una forma más rápida y eficiente.

        Es la opción perfecta para poder trabajar en equipo en un mismo proyecto.

        Ofrece todas las ventajas del sistema de control de versiones Git, pero también tiene otras herramientas que ayudan a tener un mejor control de los proyectos.


3-) Clase [3-43] - Instalando Git y GitBash en Windows - 

4-) Clase [4-43] - Instalando Git en OSX - 

        
5-) Clase [5-43] - Instalando Git en Linux

        Antes de hacer la instalación, debemos hacer una actualización del sistema.
        En nuestro caso, los comandos para hacerlo son sudo apt-get update y sudo apt-get upgrade. Con el sistema actualizado, 
        ahora sí podemos instalar Git y, en este caso, el comando para hacerlo es sudo apt-get install git.

        También puedes verificar que Git fue instalado correctamente con el comando git --version.

            sudo apt-get update
            sudo apt install git
            git --version



6-) Clase [6-43] - Editores de código, archivos binarios y de texto plano

        Tipos de archivos y sus diferencias:

            Archivos de Texto (.txt): Texto plano normal y sin nada especial.
                Lo vemos igual sin importar dónde lo abramos, ya sea con el bloc de notas o con editores de texto avanzados.

            Archivos RTF (.rtf): Podemos guardar texto con diferentes tamaños, estilos y colores.
                Pero si lo abrimos desde un editor de código, vamos a ver que es mucho más complejo que solo el texto plano.
                Esto es porque debe guardar todos los estilos del texto y, para esto, usa un código especial un poco difícil
                de entender y muy diferente a los textos con estilos especiales al que estamos acostumbrados.

            Archivos de Word (.docx): Podemos guardar imágenes y texto con diferentes tamaños, estilos o colores.
                Al abrirlo desde un editor de código podemos ver que es código binario, muy difícil de entender y muy
                diferente al texto al que estamos acostumbrados. Esto es porque Word está optimizado para entender este
                código especial y representarlo gráficamente.

        Conceptos importantes de Git:
            
            Bug: Error en el código

            Repository: Donde se almacena todo el proyecto, el cual puede vivir tanto en local como en remoto.
                El repositorio guarda un historial de versiones y, más importante, de la relación de cada versión
                con la anterior para que pueda hacerse el árbol de versiones con las diferentes ramas.

            Fork: Si en algún momento queremos contribuir al proyecto de otra persona, o si queremos utilizar el
                proyecto de otro como el punto de partida del nuestro. Esto se conoce como “fork”.

            Clone: Una vez se decide hacer un fork , hasta ese momento sólo existe en GitHub.
                Para poder trabajar en el proyecto, toca clonar el repositorio elegido al computador personal.

            Branch:
                Es una bifurcación del proyecto que se está realizando para anexar una nueva funcionalidad o corregir un bug.

            Master: Rama donde se almacena la última versión estable del proyecto que se está realizando.
                La rama master es la que está en producción en cada momento (o casi) y debería estar libre de bugs.
                Así, si esta rama está en producción, sirve como referente para hacer nuevas funcionalidades
                y/o arreglarbugs de última hora.

            Commit: consiste en subir cosas a la versión local del repositorio. De esta manera se puede trabajar
                en la rama de forma local sin tener que modificar ninguna versión en remoto ni tener que tener
                la última versión remota, cosa muy útil en grandes desarrollos trabajados por varias personas.

            Push: Consiste en enviar todo lo que se ha confirmado con un commit al repositorio remoto.
                Aquí es donde se une nuestro trabajo con el de los demás.

            Checkout: Acción de descargarse una rama del repositorio GIT local (sí, GIT tiene su propio repositorio
                en local para poder ir haciendo commits) o remoto.

            Fetch: Actualiza el repositorio local bajando datos del repositorio remoto al repositorio local sin actualizarlo,
                es decir, se guarda una copia del repositorio remoto en el local.

            Merge: La acción de merge es la continuación natural del fetch. El merge permite unir la copia del repositorio
                remoto con tu repositorio local, mezclando los diferentes códigos.

            Pull: Consiste en la unión del fetch y del merge, esto es, recoge la información del repositorio remoto y
                luego mezcla el trabajo en local con esta.

            Diff: Se utiliza para mostrar los cambios entre dos versiones del mismo archivo.

7-) Clase [7-43] - Introducción a la terminal y línea de comandos


8-) Clase [8-43] - Crea un repositorio de Git y haz tu primer commit

        Comandos para iniciar tu repositorio con Git:
        
            git init: para inicializar el repositorio git y el staged
            git add nombre_del_archivo.txt: enviar el archivo al staged
            git status: ver el estado, si se requiere agregar al starget o si se requiere commit
            git conf: para ver las posibles configuraciones
            git conf --list: para ver la lista de configuraciones hechas
            git conf --list --show-origin: para mostrar las configuraciones y sus rutas
            git rm --cached nombre_del_archivo.txt: para eliminar el archivo del staged(ram)
            git rm nombre_del_archivo.txt: para eliminar del repositorio

        Si por algún motivo te equivocaste en el nombre o email que configuraste al principio, lo puedes modificar de la siguiente manera:

            git config --global --replace-all user.name “Aquí va tu nombre modificado”

        O si lo deseas eliminar y añadir uno nuevo

            git config --global --unset-all user.name :Elimina el nombre del usuario
            git config --global --add user.name “Aquí va tu nombre”

Aporte creado por: Brand Huatarongo


9-) Clase [9-43] - 

10-) Clase [10-43] - 

-) Clase [11-43] - 

-) Clase [12-43] - 

-) Clase [13-43] - 

-) Clase [14-43] - 

-) Clase [15-43] - 

-) Clase [16-43] - 

-) Clase [17-43] - 
