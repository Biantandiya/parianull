void SomeFunction()
{
    AYourActor* Actor = ...; // Get a reference to your actor
    if (Actor)
    {
        Actor->OnMoveToLocationComplete.AddDynamic(this, &ThisClass::YourFunctionWhenMovementCompletes);
    }
}
