while True:
    Respuesta_1 = 0

    print("Hola mistralin@, en qué te puedo ayudar hoy?")
    print("Elige una opción:")
    print("1. Finanzas")
    print("2. Certificados")
    print("3. Fechas o eventos")
    print("4. Desarrollo estudiantil")
    print("5. Asistencia técnica")
    print("6. Admisión")

    try:
        Respuesta_1 = int(input())
    except ValueError:
        print("Entrada no válida. Debes ingresar un número del 1 al 6.")
    
    if Respuesta_1 < 1 or Respuesta_1 > 6:
        print("Elige una opción válida del 1 al 6.")
    else:
        if Respuesta_1 == 1:
            print("Elige una subopción:")
            print("1. Becas")
            print("2. Matrículas")
            print("3. CAE")
            print("4. Mensualidades y aranceles")

            Respuesta_2 = int(input())
            while Respuesta_2 < 1 or Respuesta_2 > 4:
                print("Elige una subopción válida del 1 al 4.")
                Respuesta_2 = int(input())

            if Respuesta_2 == 1:
                print("La Universidad acepta becas del estado. También contamos con becas internas. Para más información, visita: https://www.ugm.cl/unidad-de-financiamiento-estudiantil")
            elif Respuesta_2 == 2:
                print("Puedes consultar el precio de nuestras carreras para este periodo en el siguiente enlace.")
            elif Respuesta_2 == 3:
                print("El CAE es un beneficio del estado. Para más información, visita: https://www.junaeb.cl/becas-junaeb/  Para comunicarte con la UFE, escribe a tesoreria@ugm.cl")
            elif Respuesta_2 == 4:
                print("Puedes verificar tu estado de cuenta en el siguiente enlace. Para asistencia, escribe a soporte.tesoreria@ugm.cl")
        elif Respuesta_1 == 2:
            print("Para obtener certificados, visita el siguiente enlace: https://soluciones.ugm.cl/")
            print("También puedes consultar el instructivo en: https://drive.google.com/file/d/1TfPorkWWfcPVFQnOG2qtKvme_DtFenib/view?usp=sharing")
        elif Respuesta_1 == 3:
            print("Puedes consultar el calendario académico para este año en: https://drive.google.com/file/d/1ae1TW4iOj6uBAItiHYiMlOY3S-IJSxcl/view?usp=sharing")
        elif Respuesta_1 == 4:
            print("Elige una subopción:")
            print("1. Agendar cancha")
            print("2. Talleres Extracurriculares")
            print("3. CAP")
            print("4. Contacto DAE")
            Respuesta_2 = int(input())
            while Respuesta_2 < 1 or Respuesta_2 > 4:
                print("Elige una subopción válida del 1 al 4.")
                Respuesta_2 = int(input())
            if Respuesta_2 == 1:
                print("Puedes arrendar la cancha a través de este formulario: https://docs.google.com/forms/d/e/1FAIpQLSdjPfU_a-fbL48hXHAKLfPD8iusGHOGf2gjStzzH_rQqQc2iA/viewform")
            elif Respuesta_2 == 2:
                print("Puedes verificar si hay inscripciones a talleres activas o eventos en esta sección.")
            elif Respuesta_2 == 3:
                print("Para apoyo psicológico, comunícate a secretaria.cap@ugm.cl")
            elif Respuesta_2 == 4:
                print("Puedes contactar al encargado de la DDE en alvaro.garrido@ugm.cl o seguirlos en Instagram: @ugm_desarrolloestudiantil/")
        elif Respuesta_1 == 5:
            print("Puedes contactar a los siguientes correos para asistencia técnica:")
            print("- Registro Académico TI: soporte@ugm.cl, soporte.academico@ugm.cl")
            print("- Tesorería: soporte.tesoreria@ugm.cl")
            print("- Virtual: soporte.virtual@ugm.cl")
        elif Respuesta_1 == 6:
            print("Elige una subopción:")
            print("1. Simula tu beca")
            print("2. Conócenos")
            print("3. Carreras")
            Respuesta_2 = int(input())
            while Respuesta_2 < 1 or Respuesta_2 > 3:
                print("Elige una subopción válida del 1 al 3.")
                Respuesta_2 = int(input())
            if Respuesta_2 == 1:
                print("Puedes simular tu beca UGM en el siguiente enlace: https://simulador.ugm.cl/")
            elif Respuesta_2 == 2:
                print("Para conocer más sobre nuestra universidad, visita: https://www.ugm.cl/")
                print("Síguenos en Instagram: https://www.instagram.com/ugmistral/")
            elif Respuesta_2 == 3:
                print("Facultad de Ciencias Sociales, Jurídicas y Humanidades: Escuela de Derecho, Escuela de Trabajo Social, Escuela de Humanidades, Escuela de Periodismo y Comunicaciones, Escuela de Psicología")
                print("Facultad de Negocios y Tecnologías: Escuela de Negocios, Escuela de Ingenierías y Tecnologías")
                print("Facultad de Arquitectura, Diseño y Artes Digitales: Escuela de Arquitectura, Escuela de Diseño y Artes Digitales")
        else:
            print("Opción no válida.")
    respuesta = input("¿Deseas volver al inicio? (S/N): ").lower()
    if respuesta != 's':
        break

print("Hasta pronto :)")
