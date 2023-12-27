
/*
void AMovingPlatform::MovePlatform(float DeltaTime)
{
	if(ShouldPlatformReturn())
	{
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + MoveDirection * MoveDistance; // 100이 되면 다시 되돌아감(-1 하며..)
		SetActorLocation(StartLocation);
		PlatformVelocity = -PlatformVelocity;
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();	
		CurrentLocation += (PlatformVelocity * DeltaTime);
		SetActorLocation(CurrentLocation);
	}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}

bool AMovingPlatform::ShouldPlatformReturn() const
{
	return GetDistancedMoved() > MoveDistance;
}

float AMovingPlatform::GetDistancedMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}

*/