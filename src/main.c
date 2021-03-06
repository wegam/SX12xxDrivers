/*
 * THE FOLLOWING FIRMWARE IS PROVIDED: (1) "AS IS" WITH NO WARRANTY; AND 
 * (2)TO ENABLE ACCESS TO CODING INFORMATION TO GUIDE AND FACILITATE CUSTOMER.
 * CONSEQUENTLY, SEMTECH SHALL NOT BE HELD LIABLE FOR ANY DIRECT, INDIRECT OR
 * CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE CONTENT
 * OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING INFORMATION
 * CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
 * 
 * Copyright (C) SEMTECH S.A.
 */
/*! 
 * \file       main.c
 * \brief      Ping-Pong example application on how to use Semtech's Radio
 *             drivers.
 *
 * \version    2.0
 * \date       Nov 21 2012
 * \author     Miguel Luis
 */
#ifdef MasterModel
	#include "MasterModel.h"
#endif
#ifdef SlaveModel
	#include "SlaveModel.h"
#endif
void main_Server( void );
/*
 * Main application entry point.
 */
int main( void )
{
#ifdef MasterModel
		MasterModel_Configuration();
#else
		SlaveModel_Configuration();
#endif
	while(1)
	{
		main_Server();
	}
}


/*
 * Manages the master operation
 */
void main_Server( void )
{
	#ifdef MasterModel
		MasterModel_Server();
#else
		SlaveModel_Server();
#endif
}


