#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int Respuesta_1;
   int Respuesta_2;
   bool Continuar = true;
   
   while (Continuar) {
   

   raptor_prompt_variable_zzyz ="Hola mistralin@ en que te puedo ayudar hoy, Elige una opcion: 1.Finanzas 2.certificados 3.Fechas o eventos 4.Desarrollo estudiantil 5.Asistencia tecnica 6.Admision";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> Respuesta_1;
   while (!(Respuesta_1>0 && Respuesta_1<=6))
   {
      raptor_prompt_variable_zzyz ="Elige una opcion valida: 1.Finanzas 2.certificados 3.Fechas o eventos 4.Desarrollo estudiantil 5.Asistencia tecnica 6.Admision";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> Respuesta_1;
   }
   if (Respuesta_1==1)
   {
      raptor_prompt_variable_zzyz ="1.Becas 2.Matriculas 3.CAE 4.Mensualidades y aranceles ";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> Respuesta_2;
      while (!(Respuesta_2>0 && Respuesta_2<=4))
      {
         raptor_prompt_variable_zzyz ="Elige una opcion valida: 1.Becas 2.Matriculas 3.CAE 4.Mensualidades y aranceles";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> Respuesta_2;
      }
       if (Respuesta_2==1) {
         cout << "La Universidad acepta becas del estado. Tambien contamos con becas internas como: Beca matricula, Beca lider social, Beca socieconomica UGM y muchas mas. Para mas informacion te dejo el siguiente link  https://www.ugm.cl/unidad-de-financiamiento-estudiantil" << endl;      }
         
         else if (Respuesta_2==2)
         {
            cout << "Aqui te dejo el link para ver el precio de nuestras carreras para este periodo " << endl;}

           else if (Respuesta_2==3)
            {
               cout << "El CAE es un beneficio del estado para mas informacion te dejo el siguiente link:" << endl;
			    cout << "https://www.junaeb.cl/becas-junaeb/  Con este correo podras comunicarte con la UFE tesoreria@ugm.cl" << endl;            }
            
              else if (Respuesta_2==4)
               {
                  cout << "Aqui te dejo el link para que veas tu estado de cuenta: " << endl;
				  cout << "soporte.tesoreria@ugm.cl " << endl;               }
               else
               {}

         
      
     } else if (Respuesta_1==2) {
         cout << "Para obtener certifacados ingresa al siguiente link https://soluciones.ugm.cl/ " << endl;
		 cout << "Tambien te dejo un instructivo espero te sirva de ayuda https://drive.google.com/file/d/1TfPorkWWfcPVFQnOG2qtKvme_DtFenib/view?usp=sharing" << endl; }
      
         else if (Respuesta_1==3)
         {
            cout << "No hay problema aca te dejo el calendario academico para este año:" << endl;
			cout << " https://drive.google.com/file/d/1ae1TW4iOj6uBAItiHYiMlOY3S-IJSxcl/view?usp=sharing" << endl;}
         
           else if (Respuesta_1==4)
            {
               raptor_prompt_variable_zzyz ="1.Agendar cancha 2. Talleres Extracurriculares 3.Cap 4. Contacto DAE" ;
               cout << raptor_prompt_variable_zzyz << endl;
               cin >> Respuesta_2;
               while (!(Respuesta_2>0 && Respuesta_2<=4))
               {
                  raptor_prompt_variable_zzyz ="1.Agendar cancha 2. Talleres Extracurriculares 3.CAP 4. Contacto DAE";
                  cout << raptor_prompt_variable_zzyz << endl;
                  cin >> Respuesta_2;
               }
               if (Respuesta_2==1)
               {
                  cout << "Aqui te dejo el link para el formulario para arrendar  la cancha:" << endl;
				  cout << " https://docs.google.com/forms/d/e/1FAIpQLSdjPfU_a-fbL48hXHAKLfPD8iusGHOGf2gjStzzH_rQqQc2iA/viewform" << endl;  }
               
                 else if (Respuesta_2==2)
                  {
                     cout << "Aqui puedes ver si hay inscripicones a talleres activas o eventos" << endl; }
                  
                     else if (Respuesta_2==3)
                     {
                        cout << "Nuestra universidad cuenta con una red de apoyo psicologico aqui te dejo el correo electronico para que puedas agendar una hora a un precio modico solo para mistralin@s, no descuides tu salud mental <3. " << endl;
						cout << "-Ayuda psicologica: secretaria.cap@ugm.cl "<< endl; }
                     
                     
                       else if (Respuesta_2==4)
                        {
                           cout << "Aca te dejo el correo de el encargado de la DDE:" << endl;
						   cout <<"alvaro.garrido@ugm.cl Instagram de DDE: @ugm_desarrolloestudiantil/" << endl; }
                        else
                        {}
 }
            
            
              else if (Respuesta_1==5)
               {
                  cout << "No hay problema aca te dejo los correos para la asistencia tecnica:" << endl;
				 cout << "-registro académico TI: soporte@ugm.cl soporte.academico@ugm.cl" << endl;
				 cout << "-tesoreria: soporte.tesoreria@ugm.cl" << endl;
				  cout << "-virtual: soporte.virtual@ugm.cl" << endl;               }
               
                  else if (Respuesta_1==6)
                  {
                     raptor_prompt_variable_zzyz ="1.Simula  tu beca 2.Conocenos 3. Carreras ";
                     cout << raptor_prompt_variable_zzyz << endl;
                     cin >> Respuesta_2;
                     while (!(Respuesta_2>0 && Respuesta_2<=3))
                     {
                        raptor_prompt_variable_zzyz ="1.Simula  tu beca 2.Conocenos 3. Carreras ";
                        cout << raptor_prompt_variable_zzyz << endl;
                        cin >> Respuesta_2;
                     }
                     if (Respuesta_2==1)
                     {
                        cout << "No hay problema aca te dejo el link del simulador de becas UGM:" << endl;
						cout << "https://simulador.ugm.cl/" << endl;                     }
                     
                       else if (Respuesta_2==2)
                        {
                           cout << "Aca te dejo las redes de contacto de nuestra universidad:" << endl;
						   cout << "https://www.ugm.cl/" << endl;
							cout <<" https://www.instagram.com/ugmistral/" << endl;                        }
                        
                          else if (Respuesta_2==3)
                           {
                              cout << " Facultad de Ciencias Sociales, Jurídicas y Humanidades: Escuela de Derecho; Escuela de Trabajo Social, Escuela de Humanidades, Escuela de Periodismo y Comunicaciones, Escuela de Psicología" << endl;
							  cout << "Facultad de Negocios y Tecnologías: Escuela de Negocios, Escuela de Ingenierías y Tecnologías" << endl;
cout << "Facultad de Arquitectura, Diseño y Artes Digitales: Escuela de Arquitectura, Escuela de Diseño y Artes Digitales " << endl;                          }
                           else
                           {}
                        
                     
                  }
               
            
         
       else {}
   
  cout << "¿Deseas volver al inicio? (S/N): ";
        char respuesta;
        cin >> respuesta;

        if (respuesta != 'S' && respuesta != 's') {
            Continuar = false; // Terminar el programa si el usuario no quiere volver al inicio
        } 
		
		} cout << "Hasta pronto :) " << endl;
		
   return 0;}

